#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
int n, a[104][105], m, s=0, iMax=INT_MIN;
cin>>n>>m;
    for(int i=1; i<=n; ++i){
    for(int j=1; j<=m; ++j){
        cin>>a[i][j];
        if(iMax<a[i][j]){iMax = a[i][j];}
        s = s + a[i][j];
    }
    cout<<s-iMax<<' '; s=0; iMax = INT_MIN;
}
     return 0;
}
