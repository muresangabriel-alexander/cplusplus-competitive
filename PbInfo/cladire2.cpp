#include <fstream>

using namespace std;
ifstream cin("cladire2.in");
ofstream cout("cladire2.out");

int a[1002][1002];
int s[1002][1002];

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

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)
        if(s[i][j-1]>s[i-1][j]) s[i][j] = s[i][j-1] + a[i][j];
        else s[i][j] = s[i-1][j]+a[i][j];

    cout<<s[n][m]<<'\n';

    int i=n, j=m;
    int k=1;
    drum[k].x=i; drum[k].y = j;
    while(i!=1 || j!=1){

        if(s[i][j]-a[i][j]==s[i-1][j])
        {
        drum[++k].x=--i; drum[k].y=j;
        }

        else
        {
            drum[++k].x = i; drum[k].y=--j;
        }
    }

    for(int i=k; i>=1; --i)
    cout<<drum[i].x<<' '<<drum[i].y<<'\n';

    return 0;
}
