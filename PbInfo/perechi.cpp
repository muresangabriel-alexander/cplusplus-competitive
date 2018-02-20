#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, y, iMin=0, pos1, pos2;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x>>y;
    if(abs(x-y)>iMin){iMin = abs(x-y);  pos1=x; pos2=y; }
    }
    cout<<pos1<<' '<<pos2;
    return 0;
}
