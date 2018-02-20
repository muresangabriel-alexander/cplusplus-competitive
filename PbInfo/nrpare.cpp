#include <iostream>

using namespace std;
int s [105];
int a [105][105];

int main()
{
    int n , m;
    cin>>n>>m;
    int x, cnt=0;
    int iMax= 0;
    int pos=0;
    int k=0;
    for(int i=1; i<=n; ++i)
    {
    cnt =0;

    for(int j=1; j<=m; ++j)
    {
        cin>>a[i][j];
        x = a[i][j];
        if(x%2==0)++cnt;
    }
    if(iMax<cnt)iMax = cnt;
    }


    for(int i=1; i<=n; ++i)
    {
    cnt =0;

    for(int j=1; j<=m; ++j)
    {
        x = a[i][j];
        if(x%2==0)++cnt;
    }
    if(iMax==cnt)s[++k] = i;
    }

    for(int i=1; i<=k; ++i)cout<<s[i]<<' ';
    return 0;
}
