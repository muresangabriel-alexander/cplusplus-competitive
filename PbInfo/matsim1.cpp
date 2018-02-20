#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int a[102][102], n, s1=0, s2=0;

    cin>>n;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        cin>>a[i][j];
    }

    for(int i=1; i<=n; ++i)
    for(int j=1; i+j>n+1; ++j){
        swap(a[i][j] , a[j][i]);
    }

for(int i=n; i>=1; --i){
    for(int j=n; j>=1; --j){
        cout<<a[j][i]<<' ';
    }cout<<'\n';}



    return 0;
}
