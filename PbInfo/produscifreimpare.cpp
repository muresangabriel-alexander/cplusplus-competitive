#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, prod=1;
    bool cond=true;

    cin>>n;
    while(n>0){
    if((n%10)%2==1){
    prod *=n%10; cond = false;}

    n/=10;
    }

    if(cond) cout<<-1;
    else cout<<prod;

    return 0;
}
