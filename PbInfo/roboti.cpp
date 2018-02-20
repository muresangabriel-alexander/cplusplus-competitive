//#include <iostream>
#include <fstream>
using namespace std;
ifstream cin("roboti.in");
ofstream cout("roboti.out");
int a[1004][1004], x[1000005], y[1000005];
char drum[1000005];
int di[]={-1, 1, 0, 0};
int dj[]={0, 0, -1, 1};

int ip, jp;
int ib, jb;
int n,m;

bool inside(int i, int j){
return i>=1 && i<=n && j>=1 && j<=m;
}


int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
    char c;
    cin>>c;

    if(c=='1')a[i][j]=-1;
    else a[i][j]=0;

    }

cin>>ip>>jp;
cin>>ib>>jb;


   //lee

    a[ip][jp]=1;
    x[1]=ip; y[1]=jp;
    int s=1, d=1;

    while(s<=d && a[ib][jb]==0){
        int i=x[s], j=y[s];

        for(int k=0; k<=3; ++k){
        int ii=i+di[k];
        int jj=j+dj[k];
        if(a[ii][jj]==0 && inside(ii ,jj)){a[ii][jj]=a[i][j]+1;
        ++d;
        x[d]=ii;
        y[d]=jj;
        }}
        ++s;

    }


  //  for(int i=1; i<=n; ++i){
  //  for(int j=1; j<=m; ++j) if(a[i][j]>=0)cout<<a[i][j]<<' ';
  //  else cout<<"-1 ";
  //  cout<<'\n';
   // }

    if(a[ib][jb]==0)cout<<-1;
    else {
    cout<<a[ib][jb]-1;
}


    return 0;
}