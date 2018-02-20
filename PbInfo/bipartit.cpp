#include <fstream>

using namespace std;
ifstream cin ("bipartit.in");
ofstream cout("bipartit.out");

bool v[105][105];
bool a[105];


int main()
{
    int n, m;
    cin>>n>>m;

    for(int q=1; q<=m; ++q)
    {
        int i,j;
        cin>>i>>j;
        v[i][j]=v[j][i]=1;
    }

    int k;cin>>k;
    for(int i=1; i<=k; ++i){
    int x; cin>>x;
    a[x]=1;
    }

    bool ok = 1;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j)

    if(     (v[i][j] && a[i] && a[j])  || (v[i][j] && !a[i] && !a[j])    ){cout<<"NU"; return 0;}

    cout<<"DA";

    return 0;
}
