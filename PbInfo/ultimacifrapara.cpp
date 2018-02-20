#include <iostream>

using namespace std;

int main()
{
    int n, ogl=0;
    bool cond=false;
    cin>>n;
if(n!=0){
    while(n>0){
    if((n%10)%2==0){cond = true; break; }
    n/=10;
    }}else{cond = true;}

if(cond==false)cout<<-1;
else cout<<n%10;
    return 0;
}
