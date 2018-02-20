#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, y, iMin=10000, pos;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x>>y;
    if(abs(x-y)<=iMin){iMin = abs(x-y);  pos = i;}
    }
    cout<<pos;
    return 0;
}
