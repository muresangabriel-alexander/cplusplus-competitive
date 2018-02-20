#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin("matrice7.in");
ofstream cout("matrice7.out");

int a[104][104];

int main()
{
    int n ,m;
     int iMax =0;
    cin>>n>>m;

    for(int i = 1; i<=n; ++i)
    for(int j=1; j<=m; ++j)
    {
    cin>>a[i][j];
    if(a[i][j]>iMax)iMax = a[i][j];
    }





    for(int j=1; j<=m; ++j)
    {
    int iMin = INT_MAX;

    for(int i=1; i<=n; ++i)
    {
        if(a[i][j]<iMin)iMin = a[i][j];
    }

        for(int i=1; i<=n; ++i)
    {
        if(a[i][j]==iMax) a[i][j]= iMin;
    }

    }

    for(int i=1; i<=n; ++i)
    {   for(int j=1; j<=m; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';
    }
    return 0;
}
