#include <iostream>

using namespace std;

int main()
{
    int a, cnta=0, auxa, b, cntb=0, auxb;
    cin>>a>>b; auxa=a; auxb=b;

    while(auxa>0){if(auxa%2==1)++cnta; auxa/=2;}
    while(auxb>0){if(auxb%2==1)++cntb; auxb/=2;}

    if(cnta==cntb){cout<<min(a,b); return 0;}
    if(cnta<cntb)cout<<b; else cout<<a;
    return 0;
}
