#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b,c;
    cin>>a>>b>>c;

    bool triunghi=0, iso=0;

    if(a+b>c && a+c>b && c+b>a)triunghi=1;
    if(a==b&&a!=c || c==b&&a!=c || a==c&&b!=c) iso =1;


    if(triunghi && iso)cout<<"Formeaza triunghi isoscel";
    else if(triunghi)cout<<"Nu formeaza triunghi isoscel";
    else cout<<"Nu formeaza triunghi";
    return 0;
}
