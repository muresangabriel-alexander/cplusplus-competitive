#include <fstream>

using namespace std;
ifstream cin("comori.in");
ofstream cout("comori.out");
int a[203][203];

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    for(int i=2; i<=n; ++i)
    for(int j=1; j<=m; ++j){
        int iMax = max(a[i-1][j], max(a[i-1][j-1], a[i-1][j+1]));
        a[i][j]+=iMax;
    }

    int iMax=0;
    for(int i=1; i<=m; ++i) iMax = max(iMax, a[n][i]);
    cout<<iMax;
    return 0;
}
