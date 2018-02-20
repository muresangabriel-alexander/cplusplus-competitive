#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("pozitiex.in");
ofstream cout("pozitiex.out");

int a[10004];
int binary_searchy(int a[], int n, int target){
    int lo=1, hi=n;

    while(lo<=hi){
        int mid = lo  + (hi-lo)/2;

        if(a[mid]==target){return mid;}
        else if(a[mid]<target){lo = mid+1;}
        else{hi=mid-1;}
    }

    return -1;



}


int main()
{
    int  m , n, pointy, x;

    cin>>x>>n;for(int i=1; i<=n; ++i)cin>>a[i];
    sort (a+1, a+1+n);
    int rez=binary_searchy(a,n,x);

    if(rez==-1){cout<<"NU EXISTA"; return 0;}
    else cout<<rez<<' ';

    return 0;
}
