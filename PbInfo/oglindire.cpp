#include <iostream>

using namespace std;

int a[102];

bool prim (int n){
if(n == 1 || n==0)return 0;
if(n==2)return 1;
if(n%2==0)return 0;
for(int d =3; d*d<=n; d+=2)if(n%d==0)return 0;
return 1;

}

int main()
{
    int n , m;
    cin>>n>>m;

    for(int i=1; i<=n; ++i){

    for(int j=1; j<=m; ++j)cin>>a[j];

    if(prim(a[1])) for(int j=1; j<=m/2; ++j)swap (a[j], a[m-j+1]);

      for(int j=1; j<=m; ++j)cout<<a[j]<<' ';
    cout<<'\n';
    }
    return 0;
}
