#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b;
    int c=0;
    cin>>a>>b;
    if(a%10!=0 && b%(a%10)==0)++c;
    if((a/10)%10!=0 && b%((a/10)%10)==0)++c;
    if(b%(a/100)==0)c++;

    cout<<c;


    return 0;
}
