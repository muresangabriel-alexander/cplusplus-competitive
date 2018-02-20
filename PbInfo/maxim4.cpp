#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin("maxim4.in");
ofstream cout("maxim4.out");

int main()
{
    int x, n, iMax=INT_MIN, cnt=0;

    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    if(iMax<x){iMax=x; cnt=0;}
    if(iMax==x)++cnt;

    }

    cout<<iMax<<' '<<cnt;

    return 0;
}
