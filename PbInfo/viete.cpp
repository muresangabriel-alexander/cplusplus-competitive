#include <iostream>

using namespace std;

int main()
{
    int n , a, s, p;
    int rez =1;

    cin>>a>>s>>p>>n;
    s = -s;

    rez = s;
    int S2 = s*s - p*2;
    int S1 = s;
    if(n==1)cout<<rez;
    else if(n==2)cout<<S2;

    for(int i=3; i<=n; ++i){
        rez = S2 * s - p * S1;
        S1 = S2;
        S2 = rez;
    }
    cout<<rez;
    return 0;
}
