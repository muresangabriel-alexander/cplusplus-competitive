#include <iostream>

using namespace std;

int a[103][103];

int main()
{
    int n , m;
    cin>>n>>m;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j)cin>>a[i][j];

    int cnt =0;
    for(int j=1; j<=m; ++j){
    int ok = true ;
        for(int i=1; i<n; ++i)
            for(int ii =i+1; ii<=n; ++ii)if(a[ii][j]==a[i][j]){ok=false; break;}
        if(ok)++cnt;
    }
    cout<<cnt;
    return 0;
}