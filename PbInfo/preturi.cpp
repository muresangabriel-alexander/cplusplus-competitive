#include <iostream>
#include <limits.h>
using namespace std;
int a[105][105];
int cant[105];
int iMin[105];

int main()
{
    int n,m;
    cin>>n;for(int i=1; i<=n; ++i)cin>>cant[i];

    int iiMin=INT_MAX;
    cin>>m;for(int i=1; i<=m; ++i)for(int j=1; j<=n; ++j)cin>>a[i][j];

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j){
    if(a[j][i]<iiMin && a[j][i]!=-1)iiMin=a[j][i];
    }iMin[i]=iiMin; iiMin=INT_MAX;}

    int s=0;
    for(int i=1; i<=n; ++i){
    s=s+cant[i]*iMin[i];
    }

    cout<<s;
    return 0;
}
