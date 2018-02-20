#include <iostream>
using namespace std;

int prim(int n)
{
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3;d*d<=n;d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int main()
{
    int a,b,n;
    cin>>a>>b;
    n=(a+b+1)/2;
    int i=0;
    while(!prim(n-i) && !prim(n+i) && n-i>=a)
        i++;
    if(n-i<a) cout<<"NU EXISTA";
    else if(prim(n-i)) cout<<n-i;
    else cout<<n+i;
    return 0;
}
