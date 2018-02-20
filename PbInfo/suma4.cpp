#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int uCif=0, n, s=0, intdasdas;
    cin>>n;
   // for(int i=1; i<=n; ++i){  cout<<i%10*i%10*i%10*i%10<<' ';  if(i%10==0)cout<<'\n';}

    s = n/10;
    intdasdas = n%10;
    uCif=(s*3)%10;

    for(int i =1; i<=intdasdas; ++i){
        if(i==1 || i==3 || i==7 || i==9)uCif+=1;
        if(i==2 || i==4 || i==6 || i==8)uCif+=6;
        if(i==5)uCif+=5;
   }

   cout<<uCif%10;
//1 6 1 6 5 6 1 6 1 0


    return 0;
}
