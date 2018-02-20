#include <iostream>

using namespace std;

int a[204];
 bool prim(int n)
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

    int n, x, k=0, s=0;
    cin>>n;

    for(int i=1; i<=n; ++i){cin>>a[i];}


    for(int i=n; i>=1; --i){if(prim(a[i]))cout<<a[i]<<' ';}
    return 0;
}
