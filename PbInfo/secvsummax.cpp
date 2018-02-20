#include <fstream>
#include <limits.h>
using namespace std;

ifstream cin("secvsummax.in");
ofstream cout("secvsummax.out");
const int NMAX = 100004;

int a[NMAX], i, n, p, first, last, Smax=INT_MIN, minn;

int main()
{
    cin>>n;
    for(i=1;i<=n;++i)
        cin>>a[i];


    for(i=1;i<=n;++i)
    {
        a[i]+=a[i-1];
        if(a[i]-minn>Smax) Smax=a[i]-minn, first=p+1, last=i;
        if(a[i]<minn) minn=a[i], p=i;
    }
    cout<<first<<' '<<last;
    return 0;
}
