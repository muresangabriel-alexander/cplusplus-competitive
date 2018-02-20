#include <iostream>

using namespace std;

int main()
{
    int n, m,cnt=1;

    cin>>n>>m;
    cout<<'{';
    cout<<'('<<1<<','<<1<<')';
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=m; ++j){
    if(cnt==1) {j=2; --cnt;}
     cout<<",("<<i<<','<<j<<')';
    }

  cout<<'}';
    return 0;
}