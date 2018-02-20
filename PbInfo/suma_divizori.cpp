#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int n, cnt=0;
    cin>>n;
    for(int i=1; i*i<n; ++i){
        if(n%i==0) cnt+=i + n/i;
    }
if(sqrt(n)==floor(sqrt(n)))cnt+=sqrt(n);

    cout<<cnt;
    return 0;
}
