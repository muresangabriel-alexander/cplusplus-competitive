#include <iostream>

using namespace std;
int a[102][102];
int main()
{
    int n, m ;
    int x1, x2;
    int y1, y2;
    int iMax=0, iMin = 999999999;

    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
        cin>>a[i][j];
        if(iMax<a[i][j]){iMax = a[i][j]; x1=i; y1=j;}
        if(iMin>a[i][j]){iMin = a[i][j]; x2=i; y2=j;}
    }

    for(int i=1; i<=n; ++i){
    bool ok = true;
    for(int j=1; j<=m; ++j)if(!(i == x1 || i==x2 || j==y1 || j==y2))cout<<a[i][j]<<' ', ok = false;
    if(!ok)cout<<'\n';}
    return 0;
}
