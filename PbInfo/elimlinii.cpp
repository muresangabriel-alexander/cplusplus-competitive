#include <iostream>

using namespace std;
int a[104][105];
bool verification[104];

bool  prim(int n){
if(n==1 || n==0)return 0;
if(n==2) return 1;
if(n%2==0)return 0;

for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
return 1;

}

int main()
{
    int n , m ;
    cin>>n>>m;

    for (int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j){cin>>a[i][j];
            if (prim(a[i][1]))verification[i]=1;
        }

    for(int i=1; i<=n; ++i)
    {
        if(verification[i]==1)continue;
        else{
            for(int j=1; j<=m; ++j)cout<<a[i][j]<<' ';
            cout<<'\n';
        }
    }
    return 0;
}
