#include <iostream>

using namespace std;
int a[1005];


int main()
{
    int n;
    int k;
    cin>>n>>k;

    for (int i=1; i<=n; ++i)cin>>a[i];

    for(int kk=1; kk<=k; ++kk)
    {
        // for(int i=0; i*k+kk<=n; ++i)cout<<a[i*k+kk]<<' ';
        for(int i=0; i*k+kk<n; ++i){
        for(int j=i; j*k+kk<=n; ++j)if(a[i*k + kk] > a[j*k + kk] )swap(a[i*k + kk] ,a[j*k + kk]);}
       // cout<<'\n';
    }


    for(int i=1; i<=n; ++i)cout<<a[i]<<' ';
    return 0;
}
