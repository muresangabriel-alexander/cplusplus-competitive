#include <cmath>
bool prim(int n){
if(n==1 || n==0)return 0;
if(n==2)return 1;
if(n%2==0)return 0;
for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
return 1;
}
bool a_prim(int n){
    int i=2;
    if(floor(sqrt(n))==sqrt(n))return 0;
    while(i*i<=n){
        while(!prim(i) && i*i<=n)
        ++i;
        if(n%i==0 && prim(n/i))return 1;
        ++i;}

    return 0;
    }
