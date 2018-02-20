#include <iostream>

using namespace std;

int main()
{
    int g, o, c, p;
    cin>>c>>p;
    o = (p - 2*c)/2;
    g = c - o;
    cout<<g<<' '<<o;
    return 0;
}