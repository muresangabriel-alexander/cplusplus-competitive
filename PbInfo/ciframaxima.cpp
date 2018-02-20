#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, prod=0;

    cin>>n;
    if(n==0){prod=0;}
    else{
    while(n>0){
    if(n%10>prod) prod = n%10;
    n/=10;
    }}


cout<<prod;

    return 0;
}
