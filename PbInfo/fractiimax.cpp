#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

struct fr{
    int numa;
    int numi;
};

int  a , b , c, d;

int main()
{
    cin>>a>>b;
    cin>>c>>d;

    int p ;
    int cmmdc = __gcd(b, d);
    p =  b * d / cmmdc;
    a *= p / b;
    c *= p / d;

    b = p;
    d = p;

   if(a > c)
    {
        cout<<a/__gcd(a, b)<<' ';
        cout<<b/__gcd(a, b);
    }
    else
    {
        cout<<c/__gcd(c, d)<<' ';
        cout<<d/__gcd(c, d)<<' ';

    }

    return 0;
}
