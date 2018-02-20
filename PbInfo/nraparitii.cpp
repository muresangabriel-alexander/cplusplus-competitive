#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin("nraparitii.in");
ofstream cout("nraparitii.out");
int a[102];

int main()
{
    int x, n, iMax=INT_MIN, cnt=0;

    cin>>n;
    for(int i=1; i<=n; ++i){cin>>a[i];}
    for(int i=1; i<=n; ++i){if(a[n]==a[i])++cnt;}

    cout<<cnt;

    return 0;
}
