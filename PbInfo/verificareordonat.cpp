#include <iostream>

using namespace std;

int main()
{
    int a[502], n;
    bool cond=true;

    cin>>n;
    cin>>a[1];
    for(int i=2; i<=n; ++i){
cin>>a[i];
if(a[i]<a[i-1])cond=false;

    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
