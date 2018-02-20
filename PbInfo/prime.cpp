#include <fstream>

using namespace std;
ifstream cin("prime.in");
ofstream cout("prime.out");


bool prim(int n){
                if(n==1 || n==0)return 0;
                if(n==2)return 1;
                if(n%2==0)return 0;
                for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
                return 1;
                }


int main()
{
    int n , x;
    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    if(prim(x))cout<<x<<' ';
    }
    return 0;
}
