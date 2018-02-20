#include <iostream>

using namespace std;

int a[1000];

int main()
{
    int n, h, lmin, op=0, lastop;
    cin>>n>>h;

    for(int i=1; i<=n; ++i)cin>>a[i];
    lmin = a[n];

    for(int i=n-1; i>=1; --i){
        int op1;

        if(a[i+1]>a[i]){
            if((a[i+1]-a[i])%h==0) op1=(a[i+1]-a[i])/h;
            else op1 = (a[i+1]-a[i])/h+1;

            a[i]+=op1*h;
            op +=op1;
        }
    }

    cout<<op;
    return 0;
}
