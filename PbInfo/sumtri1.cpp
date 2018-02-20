#include <fstream>
#include <limits.h>
using namespace std;
ifstream cin("sumtri1.in");
ofstream cout("sumtri1.out");
int a[103][103];
int s[103][103];


int main()
{
    int n;
    cin>>n;
    for(int i =1; i<=n; ++i)
    for(int j=1; j<=i; ++j)cin>>a[i][j];

    for(int i=1; i<=n; ++i)s[n][i] = a[n][i];

    for(int i=n-1; i>=1; --i)
    for(int j=1; j<=i; ++j)
    if(s[i+1][j] < s[i+1][j+1])s[i][j]=s[i+1][j]+a[i][j];
    else s[i][j]+=s[i+1][j+1]+a[i][j];

    cout<<s[1][1]<<'\n';


    int j=1;
    cout<<a[1][j]<<' ';
    for(int i=2; i<=n; ++i)
    if(s[i-1][j]- a[i-1][j]==s[i][j])cout<<a[i][j]<<' ';
    else {
        cout<<a[i][j+1]<<' '; ++j;

    }




    return 0;
}
