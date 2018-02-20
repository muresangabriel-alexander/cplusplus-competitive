#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, x, iMax=0 , iMin=1002;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    iMax = max(iMax, x);
    iMin = min(iMin,x);
    }

    int gcd = __gcd(iMin , iMax);
cout<<iMin/gcd<<'/'<<iMax/gcd;
    return 0;
}
