#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin("pozmax.in");
ofstream cout("pozmax.out");
int main()
{
    int n;
    double x, iMax=INT_MIN, prAp, ulAp;
    cin>>n;

    for(int i=1; i<=n; ++i){
    cin>>x;
    if(x>iMax){prAp=i; iMax=x;}
    if(x>=iMax){ulAp=i;}
    }

    cout<<prAp<<' '<<ulAp;
    return 0;
}
