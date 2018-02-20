#include <iostream>

using namespace std;

int olg(int n){
int nr=0;
if(n==0) return 0;
while(n>0){
    nr=nr*10+n%10;
    n/=10;
}
return nr;

}

int main()
{
    int a[1002], n, ogli;
    bool cond=false;

    cin>>n;
    for(int i=1; i<=n; ++i)cin>>a[i];
        ogli = olg(a[1]);
    for(int i=2; i<=n; ++i){
    if(a[i]==ogli)cond=true;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
