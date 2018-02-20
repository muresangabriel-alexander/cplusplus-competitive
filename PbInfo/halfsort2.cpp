#include <fstream>
#include <algorithm>

using namespace std;
ifstream cin("halfsort2.in");
ofstream cout("halfsort2.out");

int par[53];
int impar[52];

int main()
{

    int n, x, m=0, k=0;
    cin>>n;

    for(int i=1; i<=n; ++i){
    cin>>x;
    if(i%2==0)par[++k] = x;

    else impar[++m] = x;
    }

    sort (impar + 1, impar + m + 1);
    sort (par  + 1 , par + k +1 );
k =0;
for(int i=1; i<=n; ++i){
    if(i%2==0) cout<<par[++k]<<' ';

    else cout<<impar[m--] <<' ';
    }


    return 0;
}
