#include <iostream>
#include <cmath>
using namespace std;

bool prim(int n){
    if(n==0||n==1)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int d=3; d*d<=n; d+=2)if(n%d==0) return 0;
    return  1;
}


int primulDivi(int n)
{
        if(n%2==0){return 2;}
        if(prim(n)){return n;}
        if(sqrt(n)==floor(sqrt(n)) && prim(sqrt(n))) return sqrt(n);
        for(int i=3; i*i<=n; i+=2){if(n%i==0 && prim(i))return i;}
}

int main()
{
    int n;
    long long s=0;
    cin>>n;

    for(int t=1; t<=n; ++t){
        int x;
        cin>>x;
        s+=primulDivi(x);

    }
    cout<<s;
    return 0;
}
