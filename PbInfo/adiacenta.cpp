#include <fstream>

using namespace std;
ifstream cin("adiacenta.in");
ofstream cout("adiacenta.out");

bool a[105][105];


int main()
{
    int n ,m ;
    cin>>n>>m;

    for(int mu=1; mu<=m; ++mu){
        int i , j;
        cin>>i>>j;
        a[i][j]=1;
        a[j][i]=1;
    }

    for(int i=1; i<=n ;++i)
    {
    for(int j=1; j<=n; ++j)cout<<a[i][j]<<' ';
    cout<<'\n';
    }
    return 0;
}
