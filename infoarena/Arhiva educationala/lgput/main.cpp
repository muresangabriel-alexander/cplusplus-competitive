#include <fstream>

using namespace std;
ifstream cin("lgput.in");
ofstream cout("lgput.out");

const int MOD = 1999999973;


int lgput(int n , int p)
{
if(p==0)return 1;
long long x=lgput(n,p/2);
x=x*x%MOD;
if(p&1) x=x*n%MOD;

return x;

}
int main()
{
    int a, b;
    cin>>a>>b;
    cout<<lgput(a,b);


    return 0;
}
