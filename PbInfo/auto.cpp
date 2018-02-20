#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, d=0;
    double tt =0;
    cin>>n;

    for(int i=1; i<=n; ++i){
        int v , t;
        cin>>t>>v;
        d += v*t;
        tt += t;

    }

    cout<<fixed<<setprecision(2)<<d<<' '<<d/tt*1.0;
    return 0;
}
