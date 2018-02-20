// Exponetial Time -30 points

#include <fstream>

using namespace std;
ifstream cin("cmlsc.in");
ofstream cout("cmlsc.out");

int n, m, k, i,j;

int a[1030];
int b[1030];
int sir[1030];

int c[1030][1030];

int main()
{
    cin>>n>>m;

    for(i=1; i<=n; ++i)cin>>a[i];
    for(i=1; i<=m; ++i)cin>>b[i];

for (i=1;i<=n;i++)
for (j=1;j<=m;j++)
   if (a[i]==b[j]) c[i][j]=c[i-1][j-1]+1;
              else c[i][j]=max(c[i-1][j],c[i][j-1]);

    cout<<c[n][m]<<'\n';
    i=n;
    j=m;
    while (c[i][j])
    { if (a[i] == b[j])  sir[++k] = a[i], --i, --j;
     else
      if (c[i][j] == c[i-1][j]) i--;
       else j--;

    }

    for(i=k; i>=1; --i)cout<<sir[i]<<' ';
    return 0;
}
