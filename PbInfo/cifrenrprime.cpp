#include <iostream>

using namespace std;


bool prim(int n)
{
    if(n==0 || n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(int d=3;d*d<=n;d=d+2)
        if(n%d==0) return 0;
    return 1;
}

int nrcif(int n){
int cnt=0;
while(n>0){
++cnt;
n/=10;
}
return cnt;
}
int main()
{
    int x, n, s=0;
    cin>>n;

    for(int i=1; i<=n; ++i){
    cin>>x;
    if(prim(x))s+=nrcif(x);
    }

    cout<<s;
    return 0;
}
