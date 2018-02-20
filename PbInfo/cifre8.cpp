#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
int fr[15];
int c;
int cnt;


void desfacere(int n){
++fr[n%10];
while (n>0){if(n%10==c)++cnt; n/=10;}

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
    int s=0;

    cin>>n;
    cin>>c;
    for(int i=1; i<=n; ++i){
        int x;
        cin>>x;
        desfacere(x);
        if(prim(x))s+=x;

    }

    cout<<s<<" "<<cnt<<' ';

    int ans=fr[1];
    int ss=fr[1];
    for(int i=3; i<=9; i+=2)ans=__gcd(ans,fr[i]),ss+=fr[i];


    cout<<ss/ans;

    return 0;
}
