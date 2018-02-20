#include <iostream>

using namespace std;
int a[30][30];

int main()
{
    int n, primu=0, doi=0, urm=2;
    cin>>n;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        a[i][j]=(primu+doi)%10;
        primu=doi;
        doi=a[i][j];
        if(j==1 && i==1){ ++a[i][j]; ++doi; }
    }

    for(int i=1; i<=n; ++i)
    {for(int j=1; j<=n; ++j)cout<<a[i][j]<<' '; cout<<'\n';}

    return 0;
}
