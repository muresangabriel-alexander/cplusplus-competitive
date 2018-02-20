#include <iostream>

using namespace std;

int main()
{
    int a[102], n;
    bool cond=true;

    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>a[i];
    if(a[i]%2==1)cond=false;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
