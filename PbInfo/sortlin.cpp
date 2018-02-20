#include <iostream>
#include <algorithm>

using namespace std;
int a[104];
int main()
{
    int n , m;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    {
        for(int j=1; j<=m; ++j)cin>>a[j];
        sort (a+1, a+m+1);
        for(int j=1; j<=m; ++j)cout<<a[j]<<' ';
        cout<<'\n';
    }
    return 0;
}
