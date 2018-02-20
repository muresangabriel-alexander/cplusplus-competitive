#include <iostream>

using namespace std;
int a[53][53];

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i = 1; i<=n; ++i)
    for(int j = 1; j<=m; ++j){
        cin>>a[i][j];
    }

    for(int i=1; i<=n; ++i){
        swap(a[i][m-1], a[i][m]);
    }
      --m;

    for(int j = 1; j<=m; ++j){
        swap(a[n-1][j], a[n][j]);
    }
        --n;


    for(int i = 1; i<=n; ++i){
    for(int j = 1; j<=m; ++j){
        cout<<a[i][j]<<' ';
    }
    cout<<'\n';
}
    return 0;
}
