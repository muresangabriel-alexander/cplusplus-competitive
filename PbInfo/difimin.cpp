#include <iostream>
#include <cmath>
using namespace std;

bool prim (int n){
    if(n==1 || n==0) return 0;
    if(n==2) return 1;
    if(n%2==0)return 0;
    for(int d = 3; d*d<=n; d+=2) if(n%d==0)return 0;
    return 1;

}

int main()
{
   int n;
   int lim;
   cin>>n;
   lim = sqrt(n);
   if(prim(n)){cout << 1 << ' '<< n; return 0;}

    for(int i=lim; i>=1; --i){
        if(n%i==0){cout<<i<<' '<<n/i; break;}
    }

    return 0;
}
