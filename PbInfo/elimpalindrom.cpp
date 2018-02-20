#include <iostream>

using namespace std;
int n;
int a[1005];
int aa[1005];

bool palindrom(int n){
 int olg =0, aux;
    aux = n;
    while(aux>0){olg = olg*10 + aux%10; aux /= 10;}
   return n == olg;
}

void citire(){
    cin>>n;
    for (int i=1; i<=n; ++i)cin>>a[i];
}

void afisare(){
    for(int i=1; i<=n; ++i)cout<<a[i]<<' ';
}

void eliminare(int pos){
    for(int i=pos; i<n; ++i)a[i]=a[i+1];
    --n;
}


int main()
{
    citire();
    int nn=n;
    int k = 0;
    for(int i=1; i<=n; ++i)if(!palindrom(a[i]))aa[++k]=a[i];
    for(int i=1; i<=k; ++i)cout<<aa[i]<<' ';
    return 0;
}
