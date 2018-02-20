#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float S=0;

    for(float i=1; i<=100; i++){
        S=S+1/i;
    }
    cout<<fixed<<setprecision(2)<<S<<'\n';

    return 0;
}
