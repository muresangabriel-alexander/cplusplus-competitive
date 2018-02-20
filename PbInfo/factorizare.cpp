#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int nn=n;
    int d=2;
    int exp=0;

      while(n%d==0)n/=d,++exp;

        if(exp!=0)
        cout<<d<<' '<<exp<<'\n';
        ++d;



    while(n>1 && d*d<=nn){

        exp=0;
        while(n%d==0 && d*d<=nn)n/=d,++exp;

        if(exp!=0)
        cout<<d<<' '<<exp<<'\n';
        d+=2;

    }

    if(n!=1)cout<<n<<' '<<1;
    return 0;
}
