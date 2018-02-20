#include <iostream>

using namespace std;

int main()
{
    int a, p;
    cin>>a;
    p = a%10  * ((a/100)%10);
    cout<<p;
    return 0;
}