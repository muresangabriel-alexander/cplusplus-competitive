#include <iostream>
#include <algorithm>
using namespace std;
int a[1002];
int main()
{
    int n, k;
    cin>>n>>k;

    for(int i =1; i<=n; ++i)cin>>a[i];
    sort(a+1, a+1+k);

    for(int i=1; i<=k; ++i)cout<<a[i]<<' ';

    sort(a+k+1, a+1+n);

    for(int i=0; i<n-k; ++i)cout<<a[n-i]<<' ';
    return 0;
}
