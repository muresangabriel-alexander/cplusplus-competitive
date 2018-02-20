#include <iostream>

using namespace std;

int main()
{
    int n, b, iMax=-1;
    cin>>n>>b;
if(n==0){cout<<0; return 0;}

    while(n>0){
    if(n%b>iMax)iMax=n%b;
    n/=b;
    }
    cout<<iMax;
    return 0;
}
