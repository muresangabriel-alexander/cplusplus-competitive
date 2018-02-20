#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, a, b, inti=0;
    cin>>a>>b>>n;
    if(n<max(a,b) && n>=min(a,b)){cout<<min(a,b); return 0;}
    cout<<a<<' '<<b<<' ';
    while(abs(a+b)<=n){
        inti =a+b;
        a=b;
        b=inti;

        cout<<inti<<' ';
    }
    return 0;
}

