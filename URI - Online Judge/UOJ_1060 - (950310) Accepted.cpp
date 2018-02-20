#include<iostream>
using namespace std;
int main ()
{
    int a[100] ,i,contor=0;
    for(i=1;i<=6;i++)
    {
    cin>>a[i];}

    for(i=1;i<=6;i++)
   { if(a[i]>=0)
                 contor++;
}

   cout<<contor<<" valores positivos"<<endl;
   return 0;
   }
