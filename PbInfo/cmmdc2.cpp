#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a=0, b=0, p=1;
    cin>>n;
    int aux=n, cnt=0;
    while(aux>0){++cnt; aux/=10;}

    for(int i=1; i<=cnt/2; ++i){a=a + (n%10)*p; n/=10;p*=10;}
    if (cnt%2==1)n/=10;
    p=1;
    for(int i=1; i<=cnt/2; ++i){b= b+ (n%10)*p; n/=10; p*=10;}
    cout<<__gcd(a,b);

    return 0;
}
