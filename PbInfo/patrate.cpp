#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;
    cin>>n;
    unsigned long long a = n;
    unsigned long long b1 = n+1;
    unsigned long long b2 = n+1;
    unsigned long long c = n+2;


    int x = 12;
    if(n%2==0){a/=2; c /=2 ; }

    else
        {b1/=2;b2/=2;}

    if(a%3==0)a/=3;
    if(b1%3==0){b1/=3;}
    if(c%3==0)c/=3;
    cout<<a%666013*b1%666013*b2%666013*c%666013;
    return 0;
}
