#include <iostream>

using namespace std;
bool a[1002][1002];
    int n , m, k ;

bool inside(int i, int j){
    return i>=1 && j>=1 && i<=n && j<=m;
}

int main()
{

    cin>>n>>m>>k;

    for(int q=1; q<=k; ++q){
        int x, y, p;
        cin>>x>>y>>p;

        int pp=0;
        while(pp<p && inside(x-pp, y-pp))a[x-pp][y-pp]=1,pp++;
        pp=0;
        while(pp<p && inside(x+pp, y+pp))a[x+pp][y+pp]=1,pp++;
        pp=0;
        while(pp<p && inside(x-pp, y+pp))a[x-pp][y+pp]=1,pp++;
        pp=0;
        while(pp<p && inside(x+pp, y-pp))a[x+pp][y-pp]=1,++pp;


    }

    int cnt=0;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)if(!a[i][j])++cnt;
       cout<<cnt;



    return 0;
}
