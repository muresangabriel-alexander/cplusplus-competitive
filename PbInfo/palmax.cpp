#include <iostream>

using namespace std;


int oglindit(int n){
int olg=0;
  while(n>0){
  olg=olg*10+n%10;
  n/=10;}
return olg;
}


bool pal(int n){
if(n==oglindit(n))return 1;
return 0;

}

int main()
{
    int x, iMax=-1, cnt=0;
    cin>>x;
    while(x!=0){
    if(pal(x) && x>iMax){iMax=x; cnt=0;}
    if(pal(x) && x==iMax)++cnt;
    cin>>x;
    }

if(iMax==-1) {cout<<"NU EXISTA"; return 0;}
cout<<iMax<<' '<<cnt;
    return 0;
}
