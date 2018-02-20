#include <iostream>

using namespace std;

int main()
{
    int n, a=1, b=1, s=0;
    cin>>n;
    if(n==1){cout<<1<<' '<<1; return 0;}

    cout<<a<<' '<<b<<' ';
        while (a+b<=n){
        s=a+b;
        a=b;
        b=s;
        cout<<s<<' ';
    }
    return 0;
}
