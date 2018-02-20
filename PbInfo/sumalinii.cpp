#include <iostream>

using namespace std;

int main()
{
int n, a[104][105], m, s=0;
cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
        cin>>a[i][j];
    }

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j){
        s = s + a[i][j];
    }
    cout<<s<<' '; s=0;}

     return 0;
}