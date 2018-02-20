#include <fstream>
using namespace std;
ifstream cin("fiboverif1.in");
ofstream cout("fiboverif1.out");

bool fibo(int n){
    int x=1, y=1;
    while(y<n){
     int aux = x;
     x = y;
     y = y + aux;}

    return y == n;
}

int main()
{
    int n;
    cin>>n;
    int x;

    for(int i=1; i<=n; ++i){cin>>x;
    if(fibo(x))cout<<x<<' ';
    }
    return 0;
}
