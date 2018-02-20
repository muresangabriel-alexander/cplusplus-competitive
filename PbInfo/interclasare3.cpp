#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("interclasare3.in");
ofstream cout("interclasare3.out");
 int n,m,k,l;
 int a[100005], b[100005], c[300005];

int main()
{
    cin>>n>>m;
    for(int i=1; i<=n+m; ++i){
    int x;
    cin>>x;
    if(x%2==0)c[++k]=x;
    }

    sort(c+1, c+k+1);

    for(int i=1; i<=k; ++i){cout<<c[i]<<' '; if(i%20==0)cout<<'\n';}
    return 0;
}
