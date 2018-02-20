#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int a, b, iMax=0, n;
    int p;
    cin>>n;
    for(int j=1; j<=n; ++j)
    {
        cin>>a>>b;

        if(a>b) swap(a,b);
          p = 1;
          
          while(p*2<=b)p=p*2;
    
           
        if(a<=p)cout<<p<<'\n';
        else cout<<0<<'\n';
    }
    return 0;
}