#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;

#include <cmath>
int nr_div_p(int n){
int cnt=0;
        for(int i=1; i*i<n; ++i)
        if(n%i==0){ if (i%2==0) cnt++;
        if((n/i)%2==0)cnt++;
    }
    int m=floor(sqrt(n));
if(sqrt(n)==floor(sqrt(n))&& m%2==0)cnt++;

return cnt;

}

int main()
{
   int a, b;
   cin>>a>>b;

   int iMin=INT_MAX;
   int iMax=INT_MIN;
   int cntmax=0;

if(a%2)++a;
if(b%2)--b;

   for(int i=a; i<=b; i+=2)
    {
        int diviz = nr_div_p(i);
        if(diviz>cntmax)cntmax=diviz, iMin=i, iMax=i;
        else if(diviz==cntmax)iMax=i;

    }

    cout<<cntmax<<' '<<iMin<<" "<<iMax;
    return 0;
}
