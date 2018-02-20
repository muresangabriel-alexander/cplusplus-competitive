#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int k, y=0;
    cin>>k;
    for(int x=1; x*x<=k/2; ++x){
    if(floor(sqrt(k-x*x))==sqrt(k-x*x))cout<<x<<' '<<sqrt(k-x*x)<<'\n';
    }
    return 0;
}
