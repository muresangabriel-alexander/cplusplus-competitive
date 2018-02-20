#include <iostream>

using namespace std;
int a [100][100];

int main()
{
    int n ,m ;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m;++j)cin>>a[i][j];

     for(int i =1; i<=n; ++i){
        for(int j=1; j<=m; ++j){if(j==1)continue; else cout<<a[i][j]<<' '; }
        cout<<a[i][1]<<'\n';
        }

    return 0;
}
