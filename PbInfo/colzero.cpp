#include <fstream>

using namespace std;
ifstream cin ("colzero.in");
ofstream cout("colzero.out");

int a[15][15];

int main()
{
    int n , m ;
    cin>>n>>m;

    for(int i=1 ;i<=n; ++i)
        for(int j=1; j<=m; ++j)cin>>a[i][j];

    int cnt =0 ;
    for(int j=1; j<=m; ++j)
    {
        int ok = true;
        for(int i=1; i<=n; ++i)if(a[i][j]!=0)ok = false;
        if(ok)++cnt;
    }
    cout<<cnt;
    return 0;

}
