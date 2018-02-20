#include <iostream>

using namespace std;
int a[105][105];
int sump[105];
int pos[105];

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; ++i){
    int s=0;
    for(int j=1; j<=m; ++j){cin>>a[i][j]; s+=a[i][j];}
        sump[i]=s;
        pos[i]=i;
    }

    for(int i=1; i<=n; ++i)
    for(int j=i; j<=n; ++j){
    if(sump[i]>sump[j]){swap(sump[i], sump[j]); swap(pos[i], pos[j]);}
    }

    for(int i=1; i<=n; ++i){
    int lin=pos[i];
    for(int j=1; j<=m; ++j){
            cout<<a[lin][j]<<' ';
    }cout<<'\n';}


    return 0;
}
