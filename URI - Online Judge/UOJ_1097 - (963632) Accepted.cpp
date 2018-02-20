#include<iostream>
using namespace std;
int main()
{
    int i;
for(i=1;i<=9;i=i+2)
{
    switch(i){
        case 1:
cout<<"I="<<i<<" "<<"J=7"<<endl;
cout<<"I="<<i<<" "<<"J=6"<<endl;
cout<<"I="<<i<<" "<<"J=5"<<endl;
break;
case 3:
cout<<"I="<<i<<" "<<"J=9"<<endl;
cout<<"I="<<i<<" "<<"J=8"<<endl;
cout<<"I="<<i<<" "<<"J=7"<<endl;
break;
case 5:
cout<<"I="<<i<<" "<<"J=11"<<endl;
cout<<"I="<<i<<" "<<"J=10"<<endl;
cout<<"I="<<i<<" "<<"J=9"<<endl;
break;
case 7:
cout<<"I="<<i<<" "<<"J=13"<<endl;
cout<<"I="<<i<<" "<<"J=12"<<endl;
cout<<"I="<<i<<" "<<"J=11"<<endl;
break;
case 9:
cout<<"I="<<i<<" "<<"J=15"<<endl;
cout<<"I="<<i<<" "<<"J=14"<<endl;
cout<<"I="<<i<<" "<<"J=13"<<endl;
break;
}
}
   return 0;}
