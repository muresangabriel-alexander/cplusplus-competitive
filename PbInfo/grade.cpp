#include <fstream>

using namespace std;
ifstream cin("grade.in");
ofstream cout("grade.out");
bool a[105][105];


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
    }

    for(int i=1; i<=n; ++i)
    cout<<getCnt(i,n)<<' ';


    return 0;
}
