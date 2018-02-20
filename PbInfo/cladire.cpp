#include <fstream>

using namespace std;
ifstream cin("cladire.in");
ofstream cout("cladire.out");

const int MOD=9901;
int a[1005][1005];

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
    if(i == 1 && j == 1)a[i][j]=1;
    else {
    a[i][j] = (a[i][j-1] + a[i-1][j])%MOD;
    }
    }

   /* for(int i=1; i<=n; ++i)
    {for(int j=1; j<=m; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';
    }  */
    cout<<a[n][m];
    return 0;
}
