#include <fstream>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
//ifstream cin("smartphone.in");
//ofstream cout("smartphone.out");

int a[10005];

int main()
{
    long long n;
    cin>>n;

    int n1, n2; n1=n2=0;
    long long  p1=1, p2=1;
    while (n>0)
        {
            if((n%10)%2==0){n1=n1+((n%10)*p1); p1*=10;}
            else {n2=n2+((n%10)*p2); p2*=10;}

         //  cout<<n1<<" "<<n2<<' '<<p<<'\n';
          //  p*=10;
            n/=10;
        }
   // cout<<n1<<' '<<n2<<' ';
    cout<<abs(n1-n2);
    return 0;
}
