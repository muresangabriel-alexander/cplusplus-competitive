#include <fstream>
#include <cmath>
#include <algorithm>

using namespace std;
ifstream cin("chenar.in");
ofstream cout("chenar.out");

int a[24][24];

int main()
{
    int n, cnt=0;

    cin>>n;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        cin>>a[i][j];
    }


    for(int i=1; i<=n; ++i)
      {cout<<a[1][i]<<' ';}

    for(int i=2; i<=n; ++i)
      {cout<<a[i][n]<<' ';}

    for(int i=n-1; i>=1; --i){
    cout<<a[n][i]<<' ';}

    for(int i=n-1; i>=2; --i ){cout<<a[i][1]<<' ';}



    return 0;
}