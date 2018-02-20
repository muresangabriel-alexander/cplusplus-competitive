#include <iostream>

using namespace std;
int a[30][30];

int main()
{
    int n, k,b;
    cin>>n>>k>>b;

    for(int i=1; i<=n; ++i)a[k][i]=0;
    for(int j=1; j<=n; ++j)a[j][b]=0;

    for(int i=1; i<k; ++i)
    for(int j=1; j<b; ++j)a[i][j]=1;

    for(int i=1; i<k; ++i)
    for(int j=b+1; j<=n; ++j)a[i][j]=2;

    for(int i=k+1; i<=n; ++i)
    for(int j=1; j<b; ++j)a[i][j]=3;

    for(int i=k+1; i<=n; ++i)
    for(int j=b+1; j<=n; ++j)a[i][j]=4;

    for(int i=1; i<=n; ++i)
    {for(int j=1; j<=n; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';}
    return 0;
}
