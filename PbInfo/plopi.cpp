#include <iostream>
#include <cmath>
using namespace std;
int a[1005];
int dif[507], m, cnt;
int main()
{
    int difMax =0;
    int n;
    cin>>n;
    cin>>a[1];
    for(int i=2; i<=n; ++i){
    cin>>a[i];
    dif[++m]=abs(a[i]- a[i-1]);
    if(dif[m]>difMax)difMax=dif[m];
    }

    for(int i=1; i<=m; ++i){
    if(dif[i] == difMax) ++cnt;

    }

    cout<<difMax<<' '<<cnt;
    return 0;
}
