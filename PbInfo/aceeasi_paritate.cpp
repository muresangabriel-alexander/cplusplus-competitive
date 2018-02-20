#include <iostream>
#include <cmath>
using namespace std;
int a[105];
int aa[210],k;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
    for(int i=1; i<n; ++i)
    {
        aa[++k]=a[i];
        if(abs(a[i]%2)==abs(a[i+1]%2))aa[++k]=(a[i]+a[i+1])/2;
    }

    for(int i=1; i<=k; ++i)cout<<aa[i]<<' ';
    cout<<a[n];
    return 0;
}
