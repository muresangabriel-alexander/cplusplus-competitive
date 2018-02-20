#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    if(__gcd(a,b)==1) {cout<<"PIE"; return 0;}
    cout<<"NOPIE";
    return 0;
}
