#include <iostream>

using namespace std;
int a[110][110];

int main()
{
    int n,m, cnt1=0, cnt0=0;
    cin>>n>>m;

     for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
        cin>>a[i][j];
        if(a[i][j]==1)++cnt1;
        if(a[i][j]==0)++cnt0;
    }

    for(int i=0; i<=m+1; ++i)a[0][i]=1;
    for(int i=1; i<=n+1; ++i)a[i][m+1]=1;
    for(int i=m; i>=0; --i)a[n+1][i]=1;
    for(int i=n; i>=1; --i )a[i][0]=1;

  /*  for(int i=0; i<=n+1; ++i){
    for(int j=0; j<=m+1; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';}  */

int ultimcnt=-1, an=0;
while(ultimcnt!=cnt1 && cnt1>0){
ultimcnt=cnt1;
for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
     int cnt=0;
      if(a[i+1][j]==0 && a[i][j]==1)++cnt;
      if(a[i][j+1]==0 && a[i][j]==1)++cnt;
      if(a[i][j-1]==0 && a[i][j]==1)++cnt;
      if(a[i-1][j]==0 && a[i][j]==1)++cnt;

      if(cnt>1){a[i][j]=2; --cnt1;}
    }

for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
    if(a[i][j]==2){a[i][j]=0; ++cnt0;}
    }
++an;
    }
if(cnt1!=0){cout<<-1; return 0;}
cout<<an;
    return 0;
}
