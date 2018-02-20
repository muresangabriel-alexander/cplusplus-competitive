#include <iostream>

using namespace std;

int main()
{
    int n, x, ap=0;
    cin>>n;
x=n%10;

if(n==0){cout<<1; return 0;}
    while(n>0){
    if(n%10==x)++ap;
    n/=10;
    }
cout<<ap;
    return 0;
}
