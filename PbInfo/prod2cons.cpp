#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
   if(floor(sqrt(4*n+1))==sqrt(4*n+1) && (4*n+1)%4==1){
      cout<<(sqrt(4*n+1)-1) / 2<< ' ' <<(sqrt(4*n+1)-1) / 2 + 1;
   }
   else cout<<"NU EXISTA";
    return 0;
}
