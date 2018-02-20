#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a,b;
    cin>>a>>b;
    double l = sqrt((a/2)*(a/2) + (b/2)*(b/2));
    cout<<l*4<<' '<<a*b/2;

    return 0;
}
