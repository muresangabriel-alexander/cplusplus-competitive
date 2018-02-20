#include <fstream>

using namespace std;
ifstream cin("izolate.in");
ofstream cout("izolate.out");
bool a[105][105];


int getCnt(int i, int n){
int  cnt=0;
for(int j=1; j<=n; ++j)
if(a[i][j])++cnt;

return cnt;
}


int main()
{
    int n,m=0;
    cin>>n;

    int i, j;
    while( cin>>i>>j){
    a[i][j]=1;
    a[j][i]=1;
    }

    for(int i=1; i<=n; ++i)
    if(!getCnt(i,n))++m;

    cout<<m<<' ';
    for(int i=1; i<=n; ++i)
    if(!getCnt(i,n))cout<<i<<' ';


    return 0;
}
