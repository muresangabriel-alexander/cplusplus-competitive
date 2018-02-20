#include <iostream>
using namespace std;

int main()
{
    int a,b,x;

    cin>>a>>b;
    x=a-b;

    if(x==0) cout<<"Copiii au varste egale";
    else if (x<0) cout<<"Al doilea copil este mai mare cu "<<(-1)*x<<" ani";
         else cout<<"Primul copil este mai mare cu "<<x<<" ani";
    return 0;
}
