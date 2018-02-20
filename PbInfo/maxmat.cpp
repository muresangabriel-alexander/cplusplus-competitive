#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin ("maxmat.in");
ofstream cout("maxmat.out");

int a[30][30];

int main()
{
    int n , m ;
    cin>>n>>m;

    for(int i=1 ;i<=n; ++i){
            int iMax = INT_MIN;
            int p =1;
        for(int j=1; j<=m; ++j){cin>>a[i][j];
            if(a[i][j]>iMax){iMax = a[i][j]; p=j;}
        }
        cout<<iMax<<' '<<p<<'\n';

    }

    return 0;

}
