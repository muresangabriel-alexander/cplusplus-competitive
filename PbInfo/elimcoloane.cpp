#include <iostream>

using namespace std;
int a[101][101];
bool ok[101];

int main()
{
    int  n ,m ;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    for(int j=1; j<=m; ++j)
    {
        for(int i=1; i<=n; ++i)if(a[i][j]==0){ok[j]=1; break;}
    }

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j)if(!ok[j])cout<<a[i][j]<<' '; cout<<'\n';}
    return 0;
}
