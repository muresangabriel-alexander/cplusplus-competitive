#include <iostream>

using namespace std;
int a[20][20];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; ++i)a[i][1]=1;
    for(int j=1; j<=n; ++j)a[n][j]=j;

    for(int i=n-1; i>=1; --i)
    for(int j=2; j<=n; ++j){a[i][j]=a[i+1][j]+a[i][j-1];}

    for(int i=1; i<=n; ++i)
    {for(int j=1; j<=n; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';
    }

    return 0;
}
