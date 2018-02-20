#include <fstream>
using namespace std;
ifstream cin("culori1.in");
ofstream cout("culori1.out");

char a[55][55];
char b[55][55];
int main()
{
    int n,m, cntr=0, cnta=0, t;
    cin>>n>>m>>t;

     for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
        cin>>a[i][j];
    }

    for(int i=0; i<=m+1; ++i)a[0][i]='q';
    for(int i=1; i<=n+1; ++i)a[i][m+1]='q';
    for(int i=m; i>=0; --i)a[n+1][i]='q';
    for(int i=n; i>=1; --i )a[i][0]='q';

/*   for(int i=0; i<=n+1; ++i){
    for(int j=0; j<=m+1; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';}  */

int an=0;
while(an<t){

for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
     int cntAlbastri=0, cntRosu=0;
      if(a[i+1][j]=='a' )++cntAlbastri;
      if(a[i][j+1]=='a')++cntAlbastri;
      if(a[i][j-1]=='a' )++cntAlbastri;
      if(a[i-1][j]=='a' )++cntAlbastri;

      if(a[i+1][j-1]=='a' )++cntAlbastri;
      if(a[i+1][j+1]=='a')++cntAlbastri;
      if(a[i-1][j-1]=='a' )++cntAlbastri;
      if(a[i-1][j+1]=='a' )++cntAlbastri;

      if(a[i+1][j]=='r' )++cntRosu;
      if(a[i][j+1]=='r')++cntRosu;
      if(a[i][j-1]=='r' )++cntRosu;
      if(a[i-1][j]=='r' )++cntRosu;

      if(a[i+1][j-1]=='r' )++cntRosu;
      if(a[i+1][j+1]=='r')++cntRosu;
      if(a[i-1][j-1]=='r' )++cntRosu;
      if(a[i-1][j+1]=='r' )++cntRosu;

      if(cntAlbastri>cntRosu)b[i][j]='a';
      else if(cntRosu>cntAlbastri)b[i][j]='r';
      else{b[i][j]=a[i][j];}
    }

for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
    if(a[i][j]!=b[i][j]){a[i][j]=b[i][j];}
    }

++an;
    }
for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j)cout<<a[i][j]; cout<<'\n';}
    return 0;
}
