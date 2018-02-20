#include <iostream>
#include <limits.h>
using namespace std;

int a[630][630];

bool prim(int n){
    if(n==0 || n==1)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int i=3; i*i<=n; i+=2)if(n%i==0)return 0;
    return 1;

}

int main()
{
    int n , m ;
    cin>>n>>m;
    int cnt=0;
    for(int i=1 ;i<=n; ++i){

        for(int j=1; j<=m; ++j){cin>>a[i][j];

            if(j%2==1 && prim(a[i][j]))++cnt;
        }
      //  cout<<iMax<<' '<<p<<'\n';

    }
    cout<<cnt;
    return 0;

}
