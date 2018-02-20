#include <fstream>

using namespace std;
ifstream cin("graf_partial.in");
ofstream cout("graf_partial.out");

int a[105][105];
int b[105][105];

int getCnt(int i, int n){
int  cnt=0;
for(int j=1; j<=n; ++j)
if(a[i][j])++cnt;

return cnt;
}



int main()
{
    int n;
    int x, y;
    cin>>n;
    while(cin>>x>>y)
     if(x%2!=y%2)a[x][y]=a[y][x]=1;

    int cnt = 0;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j)if(a[i][j])++cnt;

    cout<<cnt/2;

    return 0;
}
