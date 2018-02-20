#include <iostream>

using namespace std;

int main()
{
    int a, l , z;
    bool bisect=0;

    cin>>z>>l>>a;
    if((a%4==0 && a%100!=0) || a%400==0) bisect =1;

    if(l==1 || l==3 || l==5 || l==7 || l==8 || l==10 || l==12){if (z<=31 && z!=0) cout<<"DA"; else cout<<"NU";}
    else if(l==2) { if(bisect && z<=29)cout<< "DA"; else if(z<=28 && !bisect)cout<<"DA"; else cout<<"NU";}
    else if(z<=30 && l<=12 && z!=0 && l!=0)cout<<"DA";
    else cout <<"NU";

    return 0;
}
