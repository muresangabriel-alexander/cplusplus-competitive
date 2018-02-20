#include <iostream>
#include <algorithm>
using namespace std;
int Nord, Sud, Vest, Est;
int a[5];
int main()
{
    int n,x;

    cin>>n;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
    cin>>x;
    if(i<j && i+j<n+1)Nord+=x;
    if(i>j && i+j>n+1)Sud+=x;
    if(i>j && i+j<n+1)Vest+=x;
    if(i<j && i+j>n+1)Est+=x;
    }

    a[1]=Nord; a[2]=Sud; a[3]=Vest; a[4]=Est;
    sort(a+1, a+1+4);
    cout<<a[1]<<' '<<a[2]<<' '<<a[3]<<' '<<a[4];

    return 0;
}
