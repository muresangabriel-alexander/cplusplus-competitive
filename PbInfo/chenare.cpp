#include <iostream>

using namespace std;
int a[55][55];

int main()
{
    int n ;
    cin>>n;
    int x=1;
    int l=1;
    int ll=n;

    while(x<=n){
        for(int i=l; i<=ll; ++i)a[i][l]=a[i][ll]=x;
        for(int j=l; j<=ll; ++j)a[l][j]=a[ll][j]=x;
        ++l;
        ll--;
        x++;
    }
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j)
            cout<<a[i][j]<<' '; cout<<'\n';
        }
    return 0;
}
