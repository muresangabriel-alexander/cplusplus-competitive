#include <fstream>

using namespace std;
ifstream cin("sume.in");
ofstream cout("sume.out");

int a[104];

int main()
{
    int n, s=0;
    cin>>n; for(int i=1; i<=n; ++i){cin>>a[i]; s+=a[i];}
    for(int i=n; i>=1; --i){cout<<s<<'\n'; s-=a[i];}
    return 0;
}
