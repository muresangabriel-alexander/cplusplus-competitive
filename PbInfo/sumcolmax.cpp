#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin("sumcolmax.in");
ofstream cout("sumcolmax.out");
int a[50][50];

int main()
{
    int n, m ;
    cin>>n>>m;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)
        cin>>a[i][j];

    int iMax=INT_MIN;
    int col;
    for(int j=1; j<=m; ++j){
    int s=0;

    for(int i=1; i<=n; ++i)s+=a[i][j];
    if(s>iMax)iMax=s,col=j;
    }

    for(int i=1; i<=n; ++i)cout<<a[i][col]<<' ';

    return 0;
}
