#include <cmath>
bool bPerfect(int n){
   int s=1;
   for(int i=2; i*i<=n; ++i){
   if(n%i==0)s+=i+(n/i);}
    if(sqrt(n)==floor(sqrt(n)))s-=sqrt(n);
    if(s==n)return 1;
    return 0;
}

void perfect(int a, int b){
bool ok=false;
    for(int i=b; i>=a; --i){
        if(bPerfect(i)){ok=true; cout<<i<<' ';}
    }

    if(!ok)cout<<"nu exista";
}
