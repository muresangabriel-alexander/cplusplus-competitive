#include <iostream>

using namespace std;
int a[105][105];
int main()
{
    int n, m , k, x;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j)cin>>a[i][j];

    cin>>k;

    while(k--){
        cin>>x;
        bool okappa=true;
        for(int i=1; i<=n && okappa; ++i){bool gasit=false;
        for(int j=1; j<=m && !gasit; ++j){
            if(a[i][j]==x)gasit=true;
        }
        if(!gasit)okappa=false;
        }
        if(okappa)cout<<"DA"<<'\n';
        else cout<<"NU"<<'\n';

    }
    return 0;
}
