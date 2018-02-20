#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a[21][21], n, s1=0, s2=0;

    cin>>n;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        cin>>a[i][j];
    }


    for(int i=1; i<=n; ++i){
        s1 = s1 + a[i][i];
        s2 = s2 + a[i][n-i+1];
    }


    cout<<abs(s1 - s2);
    return 0;
}
