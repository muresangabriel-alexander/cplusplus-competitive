#include <iostream>

using namespace std;

void P(int &x, int p){

    int n=x, rez=0, i=1;
    bool ok=true;
    while(n>0){if(n%10==p)n/=10; else {rez+=(n%10)*i; i*=10; ok=false; n/=10;} }
    x=rez;
}

int main()
{
    int n, x, s=0;
    cin>>n;for(int i=1; i<=n; ++i){
        cin>>x;
        P(x,x%10);
        s+=x;
    }
    cout<<s;
    return 0;
}
