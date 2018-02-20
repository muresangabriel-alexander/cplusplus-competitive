#include<iostream>
using namespace std;
int main ()
{



    int a[100], i,pare=0, impare=0 , pos=0, neg=0;
    for(i=1;i<=5;i++)
    {
    cin>>a[i];}
    for(i=1;i<=5;i++)
   { if(a[i]%2==0)
                 pare++;
}
    for(i=1;i<=5;i++)
   { if(a[i]%2!=0)
                impare++;
}
    for(i=1;i<=5;i++)
   { if(a[i]>0)
                 pos++;
}
    for(i=1;i<=5;i++)
   { if(a[i]<0)
                 neg++;
}



   cout<<pare<<" valor(es) par(es)"<<'\n';
   cout<<impare<<" valor(es) impar(es)"<<'\n';
   cout<<pos<<" valor(es) positivo(s)"<<'\n';
   cout<<neg<<" valor(es) negativo(s)"<<'\n';
   return 0;
   }






