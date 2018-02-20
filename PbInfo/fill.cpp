//#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;
ifstream cin("fill.in");
ofstream cout("fill.out");
int x[10005], y[10005];

int di[]={-1, 1, 0, 0};
int dj[]={0, 0, -1, 1};
int n, m;

bool inside(int i, int j){
return i>=1 && i<=n && j>=1 && j<=m;
}

void lee(int v[104][104], int ip, int jp){
    v[ip][jp]=1;
    x[1]=ip; y[1]=jp;
    int s=1, d=1;

    while(s<=d){
        int i=x[s], j=y[s];

        for(int k=0; k<=3; ++k){
        int ii=i+di[k];
        int jj=j+dj[k];
        if(v[ii][jj]==0 && inside(ii ,jj)){v[ii][jj]=v[i][j]+1;
        ++d;
        x[d]=ii;
        y[d]=jj;
        }}
        ++s;

    }
    }

    int a[104][104];

int main()
{
int cnt_i=0, cnt_p=0;

    cin>>n>>m;

    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j){
            cin>>a[i][j];
            if(a[i][j]==1)a[i][j]=0;
            else a[i][j]=-1;
        }


    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j){
            if(a[i][j]==0){++cnt_i; lee(a, i, j);}
        }

    cout<<cnt_i;
    return 0;
}
