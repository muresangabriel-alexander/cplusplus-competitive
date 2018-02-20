#include <iostream>

using namespace std;

int main()
{
    int a, n;
    cin>>a;
    n = a%10  + ((a/100)%10)*10;
    cout<<n;
    return 0;
}