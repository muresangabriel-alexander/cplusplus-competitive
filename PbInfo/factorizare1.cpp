#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int nn=n;
    int d=2;
    int exp=0;

    int iMax=exp;
    int iiMax=2;


    while(n>1 && d*d<=nn){

        exp=0;
        while(n%d==0 && d*d<=nn)n/=d,++exp;
        if(iMax<=exp)iMax=exp,iiMax=d;
        d++;

    }

    if(n!=1 && iiMax<n)cout<<n;
    else cout<<iiMax;

    return 0;
}
