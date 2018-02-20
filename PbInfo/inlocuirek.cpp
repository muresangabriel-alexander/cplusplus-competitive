#include <iostream>

using namespace std;
int a[204];

int main()
{
    int n, k;
    bool okappa=true;
    cin>>k>>n;

    for(int i=1; i<=n; ++i)cin>>a[i];

    for(int i=n; i>=1; --i){
    if(a[i]%k==0)cout<<a[i]<<' ';
    else{
        int j=a[i], sus=a[i];
        while(j%k!=0 && sus%k!=0){--j; ++sus;}
        if(j%k==0){cout<<j<<' '; okappa=false;}
        if(sus%k==0 && okappa)cout<<sus<<' ';

        okappa = true;
    }
    }
    return 0;
}
