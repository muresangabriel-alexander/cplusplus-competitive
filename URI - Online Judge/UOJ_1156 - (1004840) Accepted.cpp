#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float S=1;
float i=2;
    for(float y=3; y<=39; y=y+2){
        
        S=S+y/i;
        i=i*2;
    }
    cout<<fixed<<setprecision(2)<<S<<'\n';

    return 0;
}