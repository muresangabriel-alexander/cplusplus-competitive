#include <iostream>

using namespace std;

int main()
{
    int n, v, p;
    cin>>n;
    if(n%792==0)v=n/792;
    else v=n/792+1;

    int ult = n%792;
    int i=0;
    while(ult>0){
        ++i;
        if(i<=9)--ult;
        if(i>9 && i<=99)ult-=2;
        if(i>99 && i<300)ult-=3;
    }
    if(n%792==0)i=300;
    if(ult==0)cout<<v<<' '<<i;
    else cout<<"IMPOSIBIL";

    return 0;
}
