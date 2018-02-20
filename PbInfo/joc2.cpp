#include <fstream>

using namespace std;
ifstream cin("joc2.in");
ofstream cout("joc2.out");
int a[103][103];
int jh[103][103];
int di[103][103];



int main()
{
    int n ,m ;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){cin>>a[i][j]; jh[i][j]=a[i][j]; di[i][j]=a[i][j];}


    int iMax=0;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
        if(di[i-1][j] > di[i][j-1])
            di[i][j]+=di[i-1][j];
        else di[i][j]+=di[i][j-1];
    }

    for(int i=1; i<=n; ++i)
    for(int j=m; j>=1; --j){
        if(jh[i-1][j] > jh[i][j+1])
            jh[i][j]+=jh[i-1][j];
        else jh[i][j]+=jh[i][j+1];
    }

    iMax = max(jh[n][1], di[n][m]);


    if(jh[n][1] == di[n][m]) cout<<3<<' '<<iMax;
    else{
        if(iMax == jh[n][1])cout<<2<<' '<<iMax;
        else cout<<1<<' '<<iMax;
    }

    return 0;
}
