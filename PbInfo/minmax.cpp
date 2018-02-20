#include <fstream>
#include <limits.h>
using namespace std;

ifstream cin("minmax.in");
ofstream cout("minmax.out");
int main()
{
    int iMax=INT_MIN, iMin=INT_MAX, n, x;
    cin>>n;

    for(int i=1; i<=n; ++i){cin>>x;
    if(x<iMin)iMin=x;
    if(x>iMax)iMax=x;
    }

    cout<<iMin<<' '<<iMax;
    return 0;
}
