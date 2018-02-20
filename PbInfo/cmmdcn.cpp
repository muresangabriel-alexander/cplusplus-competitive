#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, ultim, nr;
    cin>>n;
    cin>>nr;
    ultim = nr;
    for(int i=1; i<n; ++i){
     cin>>nr;
     ultim = __gcd(nr, ultim);
    }

    cout<<ultim;
    return 0;
}
