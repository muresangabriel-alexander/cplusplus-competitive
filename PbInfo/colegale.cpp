#include <iostream>

using namespace std;
int a[60][60];

int main()
{
    int n , m;
    cin>>n>>m;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    bool OK = false;
    for(int j=1; j<=m; ++j)
    {   bool ok = 1;
        for(int i=1; i<=n; ++i)if(a[i][j]!=a[1][j]){ok = 0;break;}
        //cout<<a[1][j]<<' ';
        if(ok){cout<<a[1][j]<<' '; OK = true;}
    }

    if(!OK)cout<<"nu exista";
    return 0;
}
