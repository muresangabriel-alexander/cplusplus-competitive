#include <fstream>
#include <algorithm>
using namespace std;

ifstream cin("statisticiordine.in");
ofstream cout("statisticiordine.out");


unsigned int a[4000005];

int main()
{
    int n , k;
    cin>>n>>k;
    for(int i=1; i<=n; ++i)cin>>a[i];
    sort(a+1,a+n+1);
    cout<<a[k];
    return 0;
}
