#include <iostream>
#include <algorithm>
using namespace std;
int a[1002];

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; ++i)cin>>a[i];
    sort(a+1, a+n+1);
    cout<<a[n]<<' '<<a[n-1];
    return 0;
}
