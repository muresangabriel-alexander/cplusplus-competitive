#include <iostream>

using namespace std;
int a[102][102];

int main()
{
    int n, m ;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    int cnt =0;
    for(int i=2; i<=n; ++i)
    {
    bool okappa = true;

    for(int j=1; j<=m; ++j)if(a[i][j]!=a[i-1][j]){okappa = false; break;}

    if(okappa){++cnt;}
    }
    cout<<cnt;
    return 0;
}


//for(int j=1; i<=m; ++j)cout<<a[i][j]<<' ';