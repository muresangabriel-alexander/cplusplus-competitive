#include <iostream>

using namespace std;
double a[205];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
    if(a[1]>a[n])swap(a[1], a[n]);
    int cnt=0;
    for(int i=1; i<=n; ++i){
        if(a[i]>a[n] || a[i]<a[1])++cnt;
    }
    cout<<cnt;
    return 0;
}
