#include <iostream>

using namespace std;
int a[205][205];
int fr[1004];

int main()
{
    int n, iMax=-1;
    cin>>n;
    for(int i=1; i<=n; ++i)for(int j=1; j<=n; ++j)cin>>a[i][j];

    for(int i=1; i<=n; ++i)
        for(int j=1; j<=n; ++j){
                if(i>j && i+j>n+1){++fr[a[i][j]]; if(a[i][j]>iMax)iMax=a[i][j];}

        }

    for(int i=0; i<=iMax; ++i)if(fr[i]>1)cout<<i<<' ';

    return 0;
}
