#include <iostream>
#include <algorithm>
using namespace std;
int a[205], n, cnt;
int main()
{
    int x, y;

    cin>>n;

    for(int i  = 1; i<=n; ++i){cin>>a[i];}

    for(int i = 1; i<=n/2; ++i){
    if (__gcd(a[i], a[n-i+1])==1){++cnt;}
    }
cout<<cnt;
      return 0;
}
