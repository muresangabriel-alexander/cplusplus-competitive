#include <iostream>

using namespace std;
int a[101][101];

int main()
{
    int n, m ;
    int k ;
    cin>>n>>m>>k;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    int BestSUm=0;
    for(int q=1; q<=k; ++q)
    {
        int i1, j1;
        int i2, j2;
        cin>>i1>>j1>>i2>>j2;
        int s = 0;
        for(int i=i1; i<=i2; ++i)
        for(int j=j1; j<=j2; ++j)s+=a[i][j];
        BestSUm = max(BestSUm,s);
    }

    cout<<BestSUm;
    return 0;
}