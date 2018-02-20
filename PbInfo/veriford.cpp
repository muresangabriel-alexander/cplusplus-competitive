#include <iostream>

using namespace std;

int main()
{
    int a[502], n;
    bool cond=true;
int m;
cin>>m;
    for(int j=1; j<=m; ++j){
    cin>>n;
    cin>>a[1];
    for(int i=2; i<=n; ++i){
cin>>a[i];
if(a[i]<a[i-1])cond=false;
    }

    if(cond)cout<<"1 ";
    else cout<<"0 ";
    cond = true;}
    return 0;
}
