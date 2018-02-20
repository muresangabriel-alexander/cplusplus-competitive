#include <iostream>

using namespace std;
int k;


int main()
{
    int a[102], n, x;
    bool cond=true;

    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>a[i];
    }

    for(int i=1; i<=n-1; ++i){
    if(a[i]%a[n]!=0)cond=false;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
