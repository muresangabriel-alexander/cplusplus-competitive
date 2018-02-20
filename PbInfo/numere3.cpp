//#include <iostream>

#include <fstream>
using namespace std;
ifstream cin("numere3.in");
ofstream cout("numere3.out");
int s_cif(int n){
int s=0;
while(n>0)s+=n%10,n/=10;
return s;
}

int main()
{
    int p;
    cin>>p;
    int a, b, c;
    cin>>a>>b>>c;

    if(p==1){cout<<s_cif(a)+s_cif(b)+s_cif(c);}
    else{

    while(a<=b  && b<=c){
    cout<<a<<' '<<c<<'\n';
    a+=s_cif(a);
    c-=s_cif(c);
    }
     cout<<a<<' '<<c<<'\n';
    if(a>=b && b<c)cout<<1;
    else if(a<b && b>=c)cout<<2;
    else cout<<0;

    }
    return 0;
}
