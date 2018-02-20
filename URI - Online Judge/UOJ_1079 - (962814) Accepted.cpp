#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a, b, c, WAverage[1000] ;
    int n, i;

    cin>>n;
    for(i=1; i<=n; i++){
        cin>>a>>b>>c;
        WAverage[i]=(a*2 + b*3 + c*5)/10;
    }
    for(i=1; i<=n; i++){
        cout<<fixed<<setprecision(1)<<WAverage[i]<<'\n';
    }
    return 0;
}
