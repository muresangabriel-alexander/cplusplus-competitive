#include <iostream>

using namespace std;
int  a[105][105];

int main()
{
    int n, m;
    cin>>n>>m;

        for(int i=0; i<=m+1; ++i)a[0][i]=2;
        for(int i=1; i<=n+1; ++i)a[i][m+1]=2;
        for(int i=m; i>=0; --i)a[n+1][i]=2;
        for(int i=n; i>=1; --i )a[i][0]=2;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    int cnt=0;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
    if(a[i][j-1]%2==0 && a[i-1][j]%2==0 && a[i+1][j]%2==0 && a[i][j+1]%2==0)++cnt;
    }

    cout<<cnt;
    return 0;
}
