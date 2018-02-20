#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, cnt;
    cin>>n;
    if(n==1){cout<<1; return 0;}
    if(n==2){cout<<2; return 0;}
    cnt=n + n/2-1;
    for(int i=3; i<=n; ++i){
        for(int j=i+1; j<=n; ++j){
        if(__gcd(i,j)==1)++cnt;}
    }
    cout<<cnt;
    return 0;
}
