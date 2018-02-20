#include <iostream>

using namespace std;

int main()
{
    int n, x, ap=0, av, cmax=0;
    cin>>n;
if(n==0) {cout<<0<<' '<<1; return 0;}
av = n;
while(av>0){
if(cmax<av%10) cmax = av%10;

av/=10;
}
    while(n>0){
    if(n%10==cmax) ++ap;
    n/=10;
    }
cout<<cmax<<' '<<ap;
    return 0;
}
