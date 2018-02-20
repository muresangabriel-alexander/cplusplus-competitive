#include <iostream>

using namespace std;

int main()
{
    int a[1002], n;
    bool cond=false;

    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];

    for(int i=2; i<=n-1; ++i){
    if(a[i]%2==a[i-1]%2 && a[i]%2==a[i+1]%2)cond=true;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
