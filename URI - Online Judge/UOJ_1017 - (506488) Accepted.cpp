#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t, v, c = 12;
    double f;
    cin>>t;
    cin>>v;
    f=(v*t)/c;
    cout<<fixed<<setprecision(3)<<f<<endl;

    return 0;
}
