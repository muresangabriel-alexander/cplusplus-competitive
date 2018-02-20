#include <iostream>

using namespace std;

int main()
{
    int n, cMax=0, cMin=9;
    cin>>n;
    if(n==0){cout<<0; return 0;}
    while(n>0){
    if(n%10>cMax)cMax=n%10;
    if(n%10<cMin)cMin=n%10;
    n/=10;
    }
    cout<<cMax+cMin;
    return 0;
}
