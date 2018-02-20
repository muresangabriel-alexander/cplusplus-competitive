#include <iostream>

using namespace std;
int a[102][102];


int main()
{
    int n , m, cnt=0;
    bool cond=true;
    cin>>n>>m;

    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j){
    cin>>a[i][j];
    if(a[i][1]!=a[i][j])cond=false;
    }
    if(cond)++cnt;
    cond =true;}

    cout<<cnt;
    return 0;
}
