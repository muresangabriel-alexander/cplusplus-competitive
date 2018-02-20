#include <iostream>

using namespace std;

int main()
{
    int a ,b;
    char opp;
    cin>>a>>b>>opp;
    if(opp=='+')cout<<a+b;
    if(opp=='-')cout<<max(a,b)-min(a,b);
    if(opp=='*')cout<<a*b;
    if(opp=='/')cout<<max(a,b)/min(a,b);
    return 0;
}
