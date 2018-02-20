#include <fstream>
#include <algorithm>
//#include <iostream>
using namespace std;
ifstream cin("ordsume.in");
ofstream cout("ordsume.out");
int a[105];
int sum[10004], k;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];

    for(int i=1; i<=n; ++i)
    for(int j=i+1; j<=n; ++j)if(a[i]!=a[j])sum[++k]=a[i]+a[j];
    sort(sum+1, sum+k+1);
    if(n==1){cout<<a[n]; return 0;}
    for(int i=1; i<=k; ++i){
    cout<<sum[i]<<' ';
    while(sum[i]==sum[i+1] && i<=k)++i;
    }
    return 0;
}
