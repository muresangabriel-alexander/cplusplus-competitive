#include <fstream>

using namespace std;
ifstream cin("matrice5.in");
ofstream cout("matrice5.out");
int a[105][105];

int main()
{
    int n ;
    int s=0;
    cin>>n;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j)
    {cin>>a[i][j];
        if(i<n-j+1)s+=a[i][j];
    }
    cout<<s;

    return 0;
}
