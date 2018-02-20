#include <iostream>
using namespace std;
int v[1002];
int main()
{
    int n, iMax=0, t=0;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>v[i];
    iMax = max(iMax, v[i]);
    }

    for(int i = 1; i<=n; ++i){
    t += iMax - v[i];
    }
    cout<<t;
    return 0;
}
