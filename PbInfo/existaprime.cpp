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


int main()
{
    int a[202], n;
    bool cond=false;

    cin>>n;
    for(int i=1; i<=n; ++i){
    cin>>a[i];
    if(prim(a[i])&&cond==false)cond=true;
    }

    if(cond)cout<<"DA";
    else cout<<"NU";
    return 0;
}
