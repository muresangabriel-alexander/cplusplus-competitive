#include <fstream>

using namespace std;
ifstream cin("cladire3.in");
ofstream cout("cladire3.out");

int a[202][202];
//int s[1002][1002];


struct pos{
int x;
int y;
};

pos drum [2003];

int main()
{
    int n , m;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)
    cin>>a[i][j];

for(int i=0; i<=n+1; ++i){a[i][0]=20005; a[i][m+1]=20005;}
for(int i=0; i<=m+1; ++i){a[0][i]=20005; a[n+1][i]=20005;}

   /* for(int i=0; i<=n+1; ++i){
    for(int j=0; j<=m+1; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';}
    cout<<'\n';
    */

    for(int i=n; i>=1; --i)
    for(int j=1; j<=m; ++j)
        if(j==1 && i==n)continue;
        else if(a[i+1][j]>a[i][j-1]) a[i][j] = a[i][j-1] + a[i][j];
             else a[i][j] = a[i+1][j]+a[i][j];



/*    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';}
*/

    cout<<a[1][m]<<'\n';

return 0;

}

