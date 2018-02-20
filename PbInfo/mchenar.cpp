#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int a[105][105];
int chenar[450];
int rez[450];
int main()
{
    int n, m, cnt=0, k=0;

    cin>>n>>m;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
        cin>>a[i][j];
    }


    for(int i=1; i<=m; ++i){chenar[++k]=a[1][i];}
    for(int i=2; i<=n; ++i){chenar[++k]=a[i][m];}
    for(int i=m-1; i>=1; --i){chenar[++k]=a[n][i];}
    for(int i=n-1; i>=2; --i ){chenar[++k]=a[i][1];}

    sort(chenar+1, chenar+k+1);

    for(int i=1; i<=k;++i){
        while(chenar[i]==chenar[i+1])++i;
        rez[++cnt]=chenar[i];
    }
    for(int i=1; i<=cnt; ++i)cout<<rez[i]<<' ';

    return 0;
}
