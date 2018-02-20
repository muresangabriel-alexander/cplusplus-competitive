#include <iostream>

using namespace std;
int a[30][30];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1; i<=n; ++i)
    if(i%2==0)for(int j=m; j>=1; --j)a[i][j]=m*i -j+1;
    else for(int j=1; j<=m; ++j)a[i][j]=m*(i-1) +j;

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';
    }
    return 0;
}
