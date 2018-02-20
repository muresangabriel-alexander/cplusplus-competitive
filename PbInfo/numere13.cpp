#include <iostream>
#include <cmath>
using namespace std;

int f_cif(int n)
{
while(n>=10)n/=10;
return n;
}

int main()
{
    int a,b;
    int cnt=0;
    cin>>a>>b;
    while(a!=0  && b!=0)
    {
    if(f_cif(a)==f_cif(b))++cnt;
    cin>>a>>b;
    }

    cout<<cnt;
    return 0;
}
