#include <iostream>

using namespace std;

int main()
{
    int n, a[205], s=0, inloc, cnt=0;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>a[i];
    if(a[i]!=0){
    ++cnt;
    s= s+a[i];
    }}

    inloc = s/cnt;

    for(int i =1; i<=n; ++i){
    if(a[i]==0) a[i] = inloc;
    cout<<a[i]<<' ';
    }
    return 0;
}
