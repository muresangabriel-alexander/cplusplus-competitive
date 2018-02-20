#include <iostream>

using namespace std;
int a[1002][1004];

int main()
{
    int n, m, iMax=0, cnt=0;
    bool okappa=false;

    cin>>m>>n;

    for(int i=1; i<=m; ++i)
    for(int j=1; j<=n; ++j){cin>>a[i][j]; if(iMax<a[i][j])iMax =a[i][j];}

    for(int i=1; i<=m; ++i){
    for(int j=1; j<=n; ++j){
    if(iMax==a[i][j]){okappa=true; break;}
    }
    if(okappa)++cnt;
    okappa=false;
    }

cout<<iMax<<' '<<cnt;
    return 0;
}