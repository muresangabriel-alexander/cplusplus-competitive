#include <iostream>

using namespace std;
int a[101][101];

int main()
{
    int n , m;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    int cnt =0;
    for(int i =1; i<n; ++i)
    {
        for(int ii = i+1; ii<=n; ++ii){
        bool ok =true;
        for(int j=1; j<=m; ++j)if(a[i][j]!=a[ii][j]){ok=false;break;}
        if(ok)++cnt;
        }

    }

    cout<<cnt;
    return 0;
}
