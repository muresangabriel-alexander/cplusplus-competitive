#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    if(a!=b && b!=c && a!=c) cout<<3;
    else if(a==b && a==c) cout<<1;
    else if(a==b || a==c || b==c) cout<<2;


    return 0;
}
