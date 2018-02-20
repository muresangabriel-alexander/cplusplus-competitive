#include <iostream>

using namespace std;
int a[102][102];
int main()
{
    int n, s=0;
    cin>>n;

    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j)
    {cin>>a[i][j];}

    for (int i =1; i<=n; ++i){
        s += a[i][i+1] + a[i+1][i];
    }

    cout<<s;
    return 0;
}
