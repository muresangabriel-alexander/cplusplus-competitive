#include <iostream>

using namespace std;

int main()
{
    unsigned long long n ,k, s;
    cin>>n>>k;

    cout<<k*(k-1)/2 * (n/k) + n%k*(n%k + 1)/2;

    return 0;
}
