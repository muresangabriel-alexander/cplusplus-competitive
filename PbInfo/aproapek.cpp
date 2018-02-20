#include <iostream>

using namespace std;

int main()
{
    int n, k, p, rap;
    cin>>n>>k;
    rap = n/k;
if(k==1){p=n;}
else{
    if(n-rap*k > (rap+1)*k-n)
    {p = (rap+1)*k;}
    else {p = rap*k;}
    }
    cout<<p;
    return 0;
}
