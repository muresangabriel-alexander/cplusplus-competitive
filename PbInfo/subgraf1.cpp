#include <fstream>

using namespace std;
ifstream cin ("subgraf1.in");
ofstream cout("subgraf1.out");

int a[105][105];
int b[105][105];

int getCnt(int i, int n){
int  cnt=0;
for(int j=1; j<=n; ++j)
if(b[i][j])++cnt;

return cnt;
}

void lcEmpty(int t, int n)
{
    for(int i=1; i<=n;++i)a[i][t]=a[t][i]=0;
}


int main()
{
    int n;
    int x, y;
    cin>>n;
    while(cin>>x>>y)
        a[x][y]=a[y][x]=b[x][y]=b[y][x]=1;

    int iMin=999999;
    for(int i=1; i<=n; ++i)
    iMin=min(iMin,getCnt(i,n));

    for(int i=1; i<=n; ++i)
    if(getCnt(i,n)==iMin)lcEmpty(i,n);

    int cnt =0;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j)if(a[i][j])++cnt;

    cout<<cnt/2;

    return 0;
}
