#include <iostream>

using namespace std;

int main()
{
    int a[50], n, p, x;

    cin>>n>>x>>p;

    for(int i=1; i<=n; ++i)cin>>a[i];
    ++n;
    for(int i=n; i>p; --i){swap(a[i], a[i-1]);}
    a[p]=x;

    for(int i=1; i<=n; ++i)cout<<a[i]<<' ';
    return 0;
}
