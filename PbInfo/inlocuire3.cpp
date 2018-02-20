#include <iostream>

using namespace std;
int n;
int a[1005];


void citire(){
    cin>>n;
    for (int i=1; i<=n; ++i)cin>>a[i];
}

void afisare(){
    for(int i=1; i<=n; ++i)cout<<a[i]<<' ';
}

bool prim(int n){
    if(n==0 || n==1)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int i=3 ;i*i<=n ; i+=2)if(n%i==0)return 0;
    return 1;
}


int urmatorul_prim(int n){
    if(n%2==0)++n;
    while(!prim(n))n+=2;
    return n;
}

void inloc(){
    for (int i=1; i<=n; ++i)a[i]=urmatorul_prim(a[i]);
}

int main()
{
    citire();
    inloc();
    afisare();
    return 0;
}
