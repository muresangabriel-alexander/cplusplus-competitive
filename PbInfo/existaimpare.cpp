#include <iostream>

using namespace std;

int main()
{
    int a[102], n;
    bool cond=false;

    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>a[i];
    if(a[i]%2==1)cond=true;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
