#include <iostream>

using namespace std;

int main()
{
    int n, x, ap=0, av;
    cin>>n;
av = n;
while(av>9){
av/=10;
}

if(n==0){cout<<1; return 0;}
    while(n>0){
    if(n%10==av)++ap;
    n/=10;
    }
cout<<ap;
    return 0;
}
