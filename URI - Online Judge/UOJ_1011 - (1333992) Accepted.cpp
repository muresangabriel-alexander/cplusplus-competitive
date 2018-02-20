#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double iRadius;
    double fVolume;
    cin>> iRadius;

    fVolume=iRadius*iRadius*iRadius*3.14159*(4/3.0);

    cout<<"VOLUME = "<<fixed<<setprecision(3)<<fVolume<<'\n';
    return 0;
}
