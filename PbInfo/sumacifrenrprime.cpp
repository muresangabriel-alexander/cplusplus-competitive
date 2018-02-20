#include <iostream>

using namespace std;

int s_cif(int n){int s=0; while(n>0)s+=n%10,n/=10; return s;}

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
    for(int i =1; i<=n; ++i){
    int x;
    cin>>x;
    if(prim(x))s+=s_cif(x);
    }
    cout<<s;
    return 0;
}
