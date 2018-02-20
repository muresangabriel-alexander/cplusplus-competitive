#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, prod=0;

    cin>>n;
    if(n==0){prod=1;}
    else{
    while(n>0){
    ++prod;
    n/=10;
    }}


cout<<prod;

    return 0;
}
