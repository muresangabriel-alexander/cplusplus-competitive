#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, cnt=0;
    cin>>n;

    for(int i=1; i<=n; ++i){
    int x;
    cin>>x;
    int olg =0, aux;
    aux = x;
    while(aux>0){olg = olg*10 + aux%10; aux /= 10;}
    if (__gcd(olg,x)==1) ++cnt;
    }
    cout<<cnt;
    return 0;
}
