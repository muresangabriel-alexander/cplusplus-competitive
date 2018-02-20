#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int a ,b;
    int sni=0, snu=0;
    cin>>n;

    cin>>sni>>snu;
    for(int i=1; i<n; ++i)
    {
        cin>>a>>b;
        int ssnu=snu;

        snu=snu*b/__gcd(snu,b);
        sni*=snu/ssnu;

        a*=snu/b;
        sni+=a;

    }

    int gcd=__gcd(snu,sni);
    cout<<sni/gcd<<' '<<snu/gcd;
    return 0;
}
