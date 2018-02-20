#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin("taxe.in");
ofstream cout("taxe.out");

int a[205][205];

int main()
{
    int n, m ;
    cin>>n>>m;
    for(int i=0; i<=n+1; ++i)a[i][m+1]=a[i][0]=INT_MAX;
    for(int j=0; j<=m+1; ++j)a[n+1][j]=a[0][j]=INT_MAX;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    for(int j =m-1; j>=1; --j)
    for(int i=1; i<=n; ++i){
    int iMin = min(a[i+1][j+1], min(a[i][j+1],a[i-1][j+1]));
    a[i][j]+=iMin;
    }

    int iMin = a[1][1];
    for(int i=1; i<=n; ++i)iMin=min(a[i][1],iMin);
    cout<<iMin;

    return 0;
}
