//#include <iostream>
#include <fstream>
using namespace std;
ifstream cin("acces1.in");
ofstream cout("acces1.out");
int a[1005][1005];

int x[1000005], y[1000005];

int di[]={-1, 1, 0, 0};
int dj[]={0, 0, -1, 1};

int ip[1006], jp[10006], k;
int n, m;



bool inside(int i, int j){
return i>=1 && i<=n && j>=1 && j<=m;
}


int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
    char x;
    cin>>x;
    if(x=='#')a[i][j]=-1;
    else a[i][j]=0;
    if(x=='P'){ip[++k]=i; jp[k]=j;}
    }


 int s=1, d=1;

    for(int q=1; q<=k; ++q){
            a[ip[q]][jp[q]]=1;
            x[++d]=ip[q]; y[d]=jp[q];
    }

   // a[ip[q]][jp[q]]=1;
     //   x[1]=ip[q]; y[1]=jp[q];



            while(s<=d)
            {
                int i=x[s], j=y[s];

                for(int mov=0; mov<=3; ++mov)
                {
                    int ii=i+di[mov];
                    int jj=j+dj[mov];
                    if(a[ii][jj]!=-1 && (a[ii][jj]==0 || a[ii][jj]>a[i][j]+1)  && inside(ii,jj))
                    {a[ii][jj]=a[i][j]+1;
                    ++d;
                    x[d]=ii;
                    y[d]=jj;
                    }
                }
                ++s;
            }

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j){
    if(a[i][j]-1==-1)cout<<'-'<<' ';
    else if(a[i][j]==-1)cout<<'#'<<' ';
    else cout<<a[i][j]-1<<' ';
    }cout<<'\n';
    }
    return 0;
}
