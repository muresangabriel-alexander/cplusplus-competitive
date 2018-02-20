#include <iostream>

using namespace std;

int main()
{
    int n;
    char c, b;
    cin>>n>>c>>b;

    for(int i=1; i<=n; ++i){
    cout<<c;}
    cout<<'\n';
    for(int i=1; i<=n-2; ++i){
    for(int j=1; j<=n; ++j){
    if(j==1 || j==n) cout<<c;
    else cout<<b;
    }
    cout<<'\n';
    }
    for(int i=1; i<=n; ++i){
    cout<<c;}
    return 0;
}
