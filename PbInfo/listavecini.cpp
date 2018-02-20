#include <fstream>

using namespace std;
ifstream cin("listavecini.in");
ofstream cout("listavecini.out");
bool a[105][105];
int nr[105];

int getCnt(int i, int n){
int  cnt=0;
for(int j=1; j<=n; ++j)
if(a[i][j])++cnt;

return cnt;
}
int main()
{
    int n,m;
    cin>>n;

    int i, j;
    while( cin>>i>>j){

    a[i][j]=1;
    a[j][i]=1;
    nr[i]++;
    nr[j]++;
    }

    for(int i=1; i<=n; ++i)
    {
    cout<<getCnt(i,n)<<' ';
    for(int j=1; j<=n; ++j)
    if(a[i][j])cout<<j<<' ';
    cout<<'\n';
    }

    return 0;
}
