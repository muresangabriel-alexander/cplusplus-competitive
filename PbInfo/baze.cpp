#include <iostream>
#include <cmath>
using namespace std;
//int nr_cif(int n){int cnt=0; do{n/=10; ++cnt;}while(n>0); return cnt;}
int q[100];
int main()
{
  long long a, b, n;
    cin>>n>>a>>b;

    long long val = 0;
    int cnt = 0;
    while(n>0)
    {
        val+=n%10*pow(a,cnt);
        ++cnt;
        n/=10;
    }

   // cout<<val;
  long long p=1;
   long long x=0;

   while(val>0){
         q[++x]=val%b;
        val=val/b;
   }

   for(int i=x; i>=1; --i)cout<<q[i];

    return 0;
}
