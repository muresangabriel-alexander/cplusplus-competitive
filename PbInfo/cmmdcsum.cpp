#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int a[21][21], n, s1=0, s2=0;

    cin>>n;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        cin>>a[i][j];
    }


    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        if(i<j){s1=s1+a[i][j];}
        else if (i>j){s2 = s2 + a[i][j];}
    }



    cout<<__gcd(s2, s1);

    return 0;
}
