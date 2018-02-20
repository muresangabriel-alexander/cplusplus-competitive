#include <iostream>
#include <algorithm>
using namespace std;
int a[1002], prim[1002], k;
int main()
{
    int n;
    cin>>n; for(int i=1; i<=n; ++i)cin>>a[i];

    for(int i=1; i<=n; ++i){
    if(__gcd(a[i],a[n])==1)prim[++k]=a[i];
    }

    sort(prim+1, prim+k+1);
    for(int i=k; i>=1; --i)cout<<prim[i]<<' ';
    return 0;
}
