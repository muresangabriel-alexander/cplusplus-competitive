#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("sortare.in");
ofstream cout("sortare.out");
int a[105];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
    sort(a+1, a+n+1);
    for(int i=n; i>=1; --i)cout<<a[i]<<' ';
    return 0;
}
