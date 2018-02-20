#include <iostream>
using namespace std;

int main()
{


    long long n, c1, c2;
    cin>>n>>c1>>c2;
    long long  res=0;
    int cifra =0;
    long long  p=1;

    if(n!=0 && c1!=0){
    while(n>0)
    {
        if(n%10==c1) cifra = c2;
        else cifra = n%10;

        res += p*cifra;
        p*=10;
        n/=10;
    }

    cout<<res;}
    else cout<<c2;

    return 0;
}
