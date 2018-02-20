#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("elempp.in");
ofstream cout("elempp.out");
int pr2_cif(int n){
while(n>99){n/=10;}
return n;
}

bool elemPP(int n){
int x = pr2_cif(n);
if(sqrt(x)==floor(sqrt(x)))return true;
else return false;
}

int main()
{
    int n,x;
    cin>>n;

    for(int i=1; i<=n; ++i){
        cin>>x;
        if(elemPP(x))cout<<x<<' ';

    }
    return 0;
}
