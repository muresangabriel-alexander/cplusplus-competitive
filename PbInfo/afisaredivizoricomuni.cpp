#include <iostream>
#include <algorithm>

using namespace std;
int v[5000], k;

int main()
{
    int a, b;
    cin>>a>>b;

    int div = __gcd(a,b);
if(div==1){ cout<<1; return 0;}
    for(int i=1; i*i<=div; ++i){
        if(div%i==0){v[++k]=i; v[++k]=div/i;}
    }

    sort(v+1, v+k+1);

    for(int i=1; i<=k; ++i)cout<<v[i]<<' ';
    return 0;
}
