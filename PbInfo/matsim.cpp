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
    for(int j=1; j<i; ++j){
        swap(a[i][j] , a[j][i]);
    }

for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){
        cout<<a[i][j]<<' ';
    }cout<<'\n';}



    return 0;
}