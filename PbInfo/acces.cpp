//#include <iostream>
#include <fstream>
using namespace std;
ifstream cin("acces.in");
ofstream cout("acces.out");
int a[1004][1004], x[1000005], y[1000005];
int di[]={-1, 1, 0, 0};
int dj[]={0, 0, -1, 1};

int ip, jp;
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

    if(c=='#')a[i][j]=-1;
    else a[i][j]=0;
    if(c=='P'){ ip=i; jp=j;}
    }

//cout<<ip<<' '<<jp;

   //lee

    a[ip][jp]=1;
    x[1]=ip; y[1]=jp;
    int s=1, d=1;

    while(s<=d){
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


    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j) if(a[i][j]>0)cout<<a[i][j]-1<<' ';
    else cout<<"-1 ";
    cout<<'\n';
    }
    return 0;
}
