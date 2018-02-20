#include <fstream>

using namespace std;
ifstream cin("exista.in");
ofstream cout("exista.out");
int a[20][20];
bool ex[20];

int main()
{
    int n , m, k;
    int s=0;
    cin>>k>>n>>m;

    for(int i=1; i<=n; ++i)
        for(int j=1; j<=m; ++j){cin>>a[i][j]; if(a[i][j]==k)ex[j]=1;}

    for(int i=1; i<=m; ++i)if(ex[i])s+=i;
    cout<<s;
    return 0;
}





