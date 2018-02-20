#include <iostream>

using namespace std;
int s_cif(int n){
    int s=0;
    while (n>0){s+=n%10; n/=10;}
    return s;
}


int main()
{
    int n, x, k, s=0;
    cin>>k>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    if(s_cif(x)%k==0)s+=x;
    }
    cout<<s;
    return 0;
}
