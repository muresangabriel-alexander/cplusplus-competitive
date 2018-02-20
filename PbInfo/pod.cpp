#include <iostream>

using namespace std;
int a[1003][1003];

int main()
{
    int n , m ;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    int s =0;
    for(int j=1; j<=m; ++j){
    int iMin=100009;
    for(int i=1; i<=n; ++i)iMin=min(iMin,a[i][j]);
    s += iMin;
    }
    cout<<s;
    return 0;
}
