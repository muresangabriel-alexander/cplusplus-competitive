#include <iostream>

using namespace std;

int a[25004];
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

bool bin_cond(int a[], int n, int target){
    int okappa=binary_searchy( a, n, target);
    if(okappa==-1)return 0;
    else return 1;


}
int main()
{
    int  m , n, pointy, x;

    cin>>n;for(int i=1; i<=n; ++i)cin>>a[i];
    cin>>m;for(int i=1; i<=m; ++i){cin>>x;
    cout<<bin_cond(a, n, x)<<' ';
    }
    return 0;
}