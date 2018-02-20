#include <iostream>
#include <cmath>
using namespace std;
bool perfect(int n){
   int s=1;
   for(int i=2; i*i<=n; ++i){
   if(n%i==0)s+=i+(n/i);}
    if(sqrt(n)==floor(sqrt(n)))s-=sqrt(n);
    if(s==n)return 1;
    return 0;
}
int main()
{
    int a;
    cin>>a;
    if(perfect(a))cout<<a<<" este perfect";
    else cout<<a<<" nu este perfect";
    return 0;
}
