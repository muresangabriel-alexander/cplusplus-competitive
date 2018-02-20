#include <iostream>
using namespace std;
int main(){

    int z1, l1, a1, z2, l2, a2;
    cin>>z1>>l1>>a1;
    z2=z1;
    if(a1<1850 || l1<1 || l1>12 || z1<1);
    else{
        if(l1==1 || l1==3 || l1==5 || l1==7 || l1==8 || l1==10 || l1==12){
            if(z1==31){
                z1=1;
                l1++;
                if(l1==13){
                    l1=1;
                    a1++;
                }
            }
            else if(z1<31)
                z1++;
        }
        else if(l1==4 || l1==6 || l1==9 || l1==11){
          if(z1==30){
                z1=1;
                l1++;
            }
            else if(z1<30)
                z1++;
        }
        else{
            if (a1%4==0 && a1%100!=0 || a1%400==0){
                if(z1==29){
                    z1=1;
                    l1++;
                }
                else if(z1<29)
                    z1++;
            }
        else{
            if(z1==28){
                z1=1;
                l1++;
            }
            else if(z1<28)
                z1++;
        }
    }
}
    if(z1!=z2){
        z2=z1, l2=l1, a2=a1;
        cout<<z2<<" "<<l2<<" "<<a2;
    }
return 0;
}