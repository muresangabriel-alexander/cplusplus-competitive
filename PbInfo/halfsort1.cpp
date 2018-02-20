#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("halfsort1.in");
ofstream cout("halfsort1.out");
int a[102];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
    sort(a+1, a+n/2+1);
    sort(a+n/2+1, a+n+1);

    for(int i=1; i<=n/2; ++i)cout<<a[i]<<' ';
    for(int i=n; i>=n/2+1; --i)cout<<a[i]<<' ';
    return 0;
}