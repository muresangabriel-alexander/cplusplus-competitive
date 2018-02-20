#include <iostream>
#include <cmath>
#include <limits.h>
using namespace std;
int v[1004];

int main()
{
    int n, iMin=INT_MAX, p1, p2;
    cin>>n;for(int i=1; i<=n; ++i)cin>>v[i];

    for(int i=1; i<n; ++i){  if(iMin>abs(v[i]-v[i+1])){iMin =abs(v[i]-v[i+1]); p1=i; p2=i+1;}}
    if(abs(v[1]-v[n])<iMin){p1=1; p2=n;}
    cout<<p1<<' '<<p2;
    return 0;
}
