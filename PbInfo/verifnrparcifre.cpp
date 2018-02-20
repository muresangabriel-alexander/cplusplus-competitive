#include <iostream>

using namespace std;

int nrcif(int n){
int cnt=0;
if(n==0)return 1;
while(n>0){
++cnt;
n/=10;
}
return cnt;

}

int main()
{
    int n, x;
    bool cond=true;

    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>x;
    if(nrcif(x)%2!=0)cond=false;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
