#include <iostream>

using namespace std;
int a[20];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; ++i)a[i]=i;

    for(int j=1; j<=n; ++j){
    for(int i=1; i<=n; ++i){cout<<a[i]<<' ';}
    cout<<'\n';
    int primaval=a[1];
    for(int i=1; i<n; ++i)a[i]=a[i+1];
    a[n]=primaval;
    }
    return 0;
}
