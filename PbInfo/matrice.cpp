#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int a[21][21];

int main()
{
    int n, cnt=0;

    cin>>n;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        cin>>a[i][j];
    }


    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        if(a[i][j]>a[i-1][j] && a[i][j]>a[i+1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1]) ++cnt;
    }



    cout<<cnt;

    return 0;
}
