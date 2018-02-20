#include <iostream>
#include <limits.h>
using namespace std;

int a[104][104];

int main()
{
    int n ,m;
    int iMin=INT_MAX;
    cin>>n>>m;

    for(int i = 1; i<=n; ++i)
    for(int j=1; j<=m; ++j)
    {
        cin>>a[i][j];
        if(iMin>a[i][j])iMin = a[i][j];
    }


        for(int j=1; j<=m; ++j){
        bool este = false;
        for(int i=1; i<=n; ++i)if(a[i][j]==iMin){este=1; break;}

        if(este)
        for(int i=1; i<=n; ++i)a[i][j]=iMin;

        }


    for(int i=1; i<=n; ++i)
    {   for(int j=1; j<=m; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';
    }
    return 0;
}
