#include <iostream>

using namespace std;
int ogl(int n){
int olg=0;

while(n>0){
olg=olg*10+n%10;
n/=10;
}
return olg;

}
int main()
{
   int n, s=0;
   cin>>n;

   while(n>0){
   s+=n%10;
   n/=10;
   }

   cout<<ogl(s);
    return 0;
}
