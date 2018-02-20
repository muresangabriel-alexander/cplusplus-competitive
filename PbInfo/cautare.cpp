#include <iostream>

using namespace std;

int main()
{
    int a[1002], b[1002], m , n;
    bool cond=false;

    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
    cin>>m;
    for(int i=1; i<=m; ++i)cin>>b[i];


    for(int i=1; i<=m; ++i){
    for(int j=1; j<=n; ++j){
    if(a[j]==b[i]){cond = true; break;}
    }
    cout<<cond<<' ';
    cond =false;
    }

    return 0;
}
