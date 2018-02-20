#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b,ra,rb,c=0;
    cin>>a>>b;
    if(sqrt(a)==floor(sqrt(a))) ra=sqrt(a);
    else ra=sqrt(a)+1;
    rb=sqrt(b);
    for(int n=ra; n<=rb; n++)
    {
        int x=n*n;
        int r=0;
        while(x>0)
        {
            r=r*10+x%10;
            x=x/10;
        }
        if(sqrt(r)==floor(sqrt(r))) c++;
    }
    cout<<c;
    return 0;
}
