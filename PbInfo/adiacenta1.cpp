#include <fstream>

using namespace std;
ifstream cin("adiacenta1.in");
ofstream cout("adiacenta1.out");

bool a[105][105];

int main()
{
    int i, j;
    int n=0;
    while(cin>>i>>j){
    n=max(i,max(n,j));
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
