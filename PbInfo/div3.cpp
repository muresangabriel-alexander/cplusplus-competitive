#include <fstream>

using namespace std;
ifstream cin("div3.in");
ofstream cout("div3.out");

int s_cif(int n){
int s=0;
while(n>0){s+=n%10; n/=10;}
return s;
}


int main()
{
    int n , x;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    if(s_cif(x)%3==0)cout<<x<<' ';
    }
    return 0;
}
