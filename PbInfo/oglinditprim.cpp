#include <iostream>

using namespace std;

int ogl(int n){int olg=0;
while(n>0)olg=olg*10+n%10,n/=10;
//cout<<olg;
return olg;
}

bool prim(int n){
if(n==0 || n==1)return 0;
if(n==2)return 1;
if(n%2==0)return 0;
for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
return 1;
}


int main()
{
    int n;
    cin>>n;
    long long s=0;
    for(int i=1;    i<=n; ++i){
    int x;
    cin>>x;
        if(prim(ogl(x)))s+=x;

    }

    cout<<s;
    return 0;
}
