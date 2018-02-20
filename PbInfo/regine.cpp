#include <fstream>

using namespace std;
ifstream cin("regine.in");
ofstream cout("regine.out");
int a[150][150];
int pos[510][5];
int main()
{
    int n ,m, x,y, cnt=0, iMax=0, iMaxCnt=0;
    cin>>n>>m;
    for(int i=1; i<=m; ++i){cin>>x>>y; a[x][y]=1; pos[i][1]=x; pos[i][2]=y;}

    for(int i=1; i<=m; ++i){

            for(int j=pos[i][2]+1; j<=n; ++j)if(a[pos[i][1]][j]==1){++cnt; break;}
            for(int j=pos[i][2]-1; j>=1; --j)if(a[pos[i][1]][j]==1){++cnt; break;}
            for(int j=pos[i][1]+1; j<=n; ++j)if(a[j][pos[i][2]]==1){++cnt; break;}
            for(int j=pos[i][1]-1; j>=1; --j)if(a[j][pos[i][2]]==1){++cnt; break;}

            for(int j=1; pos[i][1]+j+1<=n+1 && pos[i][2]-j>=1; ++j )if(a[pos[i][1]+j][pos[i][2]-j]==1){++cnt;  break;}
            for(int j=1; pos[i][2]+j+1<=n+1 && pos[i][1]-j>=1; ++j )if(a[pos[i][1]-j][pos[i][2]+j]==1){++cnt;  break;}

            for(int j=1; pos[i][2]+j+1<=n && pos[i][1]+j>=1; ++j )if(a[pos[i][1]+j][pos[i][2]+j]==1){++cnt;  break;}
            for(int j=1; pos[i][2]-j+1<=n && pos[i][1]-j>=1; ++j )if(a[pos[i][1]-j][pos[i][2]-j]==1){++cnt;  break;}
        if(cnt>iMax){iMax=cnt; iMaxCnt=0;}
        if(cnt==iMax)++iMaxCnt;
        cnt=0;
    }
    cout<<iMax<<' '<<iMaxCnt;
    return 0;
}