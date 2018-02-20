#include <iostream>

using namespace std;

int main()
{
    int a[1002], n;
    bool cond=true;

    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];

    for(int i=1; i<=n-1; ++i){
    if(a[i]==0 || a[i+1]==0)cond=true;
    else {cond=false; break;}
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
