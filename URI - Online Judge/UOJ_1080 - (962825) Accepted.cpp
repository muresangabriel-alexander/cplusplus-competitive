#include <iostream>
int main ()
{

   int N,maior,i,pos;

   maior=0;
   pos=1;
   for(i=1;i<=100;i++)
   {
     std::cin>>N;
      if(N>maior)
      {
         maior=N;
         pos=i;
      }

   }
   std::cout<<maior<<'\n';
   std::cout<<pos<<'\n';
}
