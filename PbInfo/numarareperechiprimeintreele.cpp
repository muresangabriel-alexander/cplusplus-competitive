#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, ultim, cnt=0;

    cin>>n;
    ultim = n;

    while (n!=0){
    cin>>n;
    if(__gcd(n, ultim)==1)++cnt;
    ultim = n;
    }
    cout<<cnt;
    return 0;
}
