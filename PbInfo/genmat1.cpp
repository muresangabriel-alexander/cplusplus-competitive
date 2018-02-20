#include <iostream>

using namespace std;
int a[22][22];

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j){a[i][j]=min(i,j); cout<<a[i][j]<<' ';}cout<<'\n';}

    return 0;
}
