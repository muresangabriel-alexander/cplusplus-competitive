#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a,b, d;
    int buc=0;
    cin>>a>>b>>d;
    bool ok1=0, ok2=0;

    if(a%d!=0)ok1=1;
    if(b%d!=0)ok2=1;


    if(ok1)buc=a/d+1; else buc=a/d;
    if(ok2)buc*=b/d+1; else buc*=b/d;
    cout<<buc;



    return 0;
}
