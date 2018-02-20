#include <fstream>
#include <algorithm>
using namespace std;
ifstream cin("cmmdc.in");
ofstream cout("cmmdc.out");


int main()
{
    long long a, b;
    cin>>a>>b;
    int c =__gcd(a,b);
    if(c==1)cout<<0;
    else cout<<c;
    return 0;
}
