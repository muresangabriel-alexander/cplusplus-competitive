#include <iostream>
#include <algorithm>
using namespace std;
int a[10000], k;
int main()
{
    int n, x;
    cin>>n;
    for(int i=1; i<=n; ++i)
    for(int j=1; j<=n; ++j){
        cin>>x;
        if(i>j && i+j<n+1)a[++k]=x;
    }
    sort(a+1, a+k+1);
    for(int i=1; i<=k; ++i){
        while(a[i]==a[i+1])++i;
        cout<<a[i]<<' ';
    }
    return 0;
}
