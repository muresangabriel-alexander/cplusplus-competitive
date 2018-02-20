#include <fstream>

using namespace std;
ifstream cin("prodmax.in");
ofstream cout("prodmax.out");

int fr[104];
int a[104][104];

int main()
{
    int n , m ;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j)cin>>a[i][j];

    int iMax = 0;
    for(int j=1; j<=m; ++j)
    {   bool ok = false;
        for(int i =1; i<=n; ++i){if(a[i][j]==2)++fr[j]; if(a[i][j]==0)ok=1;}
        if(ok==1)fr[j]=0;
        iMax = max(iMax,fr[j]);
    }

    for(int i=1; i<=m; ++i)if(fr[i]==iMax)cout<<i<<' ';
    return 0;
}
