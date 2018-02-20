#include <iostream>

using namespace std;
int a[104][104];
int pLin[104];
int pos[104];
int main()
{
    int n , m ;
    cin>>n>>m;
    for(int i=1; i<=m;++i)cin>>pLin[i], pos[i]=i;

    for(int i=1; i<=m;++i)
    for(int j=i; j<=m; ++j){
    if(pLin[i]>pLin[j])swap(pLin[j],pLin[i]), swap(pos[i],pos[j]);
    }

    for(int i=2; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];


    for(int i=1; i<=m; ++i)cout<<pLin[i]<<' ';
    cout<<'\n';
    for(int i=2; i<=n; ++i){
    for(int j=1; j<=m; ++j)cout<<a[i][pos[j]]<<' '; cout<<'\n';
    }
    return 0;
}
