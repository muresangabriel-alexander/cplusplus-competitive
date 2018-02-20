#include <iostream>

using namespace std;

int main()
{
    int n, x, ultim[10005], m=0, cnt=0;
    cin>>n;

    for(int i=1; i<=n; ++i){
    cin>>x;
    if(x%2==1){ ultim[++m]=x; ++cnt;}
    }

    if(cnt >1 ) {cout<<ultim[m-1]<<' '<<ultim[m];}
    else cout<<"Numere insuficiente";
    return 0;
}
