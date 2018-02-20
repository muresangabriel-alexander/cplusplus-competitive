//#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin("traversare.in");
ofstream cout("traversare.out");
int a[1005][1005];

int x[1000005], y[1000005];

int di[]={-1, 1, 0, 0};
int dj[]={0, 0, -1, 1};

int n, m;



bool inside(int i, int j){
return i>=1 && i<=n && j>=1 && j<=m;
}


int main()
{
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
    cin>>a[i][j];
    if(a[i][j]==1)a[i][j]=-1;
    }

 /* for(int i=1; i<=n; ++i)
{for(int j=1; j<=m; ++j)cout<<a[i][j]<<' ';
cout<<'\n';}
*/
 int s=1, d=0;

   for(int i=1; i<=m; ++i){
    if(a[1][i]==0){a[1][i]=1;
    x[++d]=1; y[d]=i;}
   }


            while(s<=d)
            {
                int i=x[s], j=y[s];

                for(int mov=0; mov<=3; ++mov)
                {
                    int ii=i+di[mov];
                    int jj=j+dj[mov];
                    if(a[ii][jj]==0  && inside(ii,jj))
                    {a[ii][jj]=a[i][j]+1;
                    ++d;
                    x[d]=ii;
                    y[d]=jj;

                    }
                }

                ++s;

            }



    int iMin=INT_MAX;

    for(int i=1; i<=m; ++i){
        if(a[n][i]>0 && iMin>a[n][i])iMin=a[n][i];
    }

    cout<<iMin;
    return 0;
}
