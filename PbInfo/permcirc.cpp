#include <iostream>

using namespace std;
int v[30];
int main()
{
    int n;
    cin>>n; for(int i=1; i<=n; ++i)cin>>v[i];

    for(int i=1; i<=n; ++i)cout<<v[i]<<' ';
    cout<<'\n';
    for(int k=1; k<n; ++k){
        int x=v[1];
        for(int i=2; i<=n; ++i)v[i-1]=v[i];
        v[n]=x;
        for(int i=1; i<=n; ++i)cout<<v[i]<<' ';
        cout<<'\n';
    }

    return 0;
}
