#include <iostream>

using namespace std;

int main()
{
    int a, b, c, iMin=2000000000;

    cin>>a>>b>>c;

    if(a<iMin) iMin = a;
    if(b<iMin) iMin = b;
    if(c<iMin) iMin = c;

    cout<<iMin;

    return 0;
}
