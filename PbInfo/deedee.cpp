#include <iostream>

using namespace std;
int r[100005];
int n, k, randd=1, sol, iMax,  curent=1, x, ccurent;


int main()
{

    cin>>n>>k;
    for(int i=0; i<k; ++i)
    {
        cin>>x;
        while (curent < x)curent+=++randd;
        ccurent =  ++r[randd];
        if(ccurent>iMax)sol = randd, iMax = ccurent;
    }

    cout<<sol <<'\n' << (n-1)*2;

    return 0;
}
