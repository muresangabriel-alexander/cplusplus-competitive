#include <iostream>

using namespace std;
bool fr[11];
int main()
{
    int n;
    cin>>n;
    if(n==0){cout<<0; return 0;}
    while(n>0){
        fr[n%10]=1;
        n/=10;
    }

    for(int i=0; i<=9; ++i){if(fr[i]==1)cout<<i<<' ';}
    return 0;
}
