#include <iostream>
#include <algorithm>
using namespace std;


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
    int a[1002], n, i, x, cnt=0;
    cin>>n;
    for( i=1; i<=n; ++i){cin>>x;
    if(prim(x))a[++cnt]=x;
    }

    sort(a+1, a+1+cnt);

    for( i=1; i<=cnt; ++i)cout<<a[i]<<' ';

    return 0;
}
