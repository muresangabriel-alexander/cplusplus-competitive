#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
struct pozitie {
    long long   x;
    long long  y;
};
int main()
{
    int n ;
    pozitie punct1, punct2;
    cin>>n;
    long long  x , y;

    cin>>x>>y;
    punct1.x = abs(x) * 1000;
    punct1.y = abs(y) * 1000;
    long long  dMax = sqrt(punct1.x*punct1.x + punct1.y*punct1.y);

        int k=1;
    for(int i=1; i<n; ++i){
     cin>>x>>y;
    punct2.x = abs(x) * 1000;
    punct2.y = abs(y) * 1000;

    long long  d = sqrt(punct2.x*punct2.x + punct2.y*punct2.y);
    if(d>dMax){dMax = d; k = 0;}
    if(d==dMax)++k;
    }
    cout<<fixed<<setprecision(3)<<(float)dMax/1000<<' '<<k;
    return 0;
}
