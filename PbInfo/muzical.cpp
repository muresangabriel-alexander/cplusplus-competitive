#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("muzical.in");
ofstream cout("muzical.out");


int main()
{
    int n;
    cin>>n;

    int s=0;
    char a[7];


    for(int i =1; i<=n; ++i)
        {
            char a[7]={0};
            cin>>a;
            if(a[0]=='d' && a[2]=='2')s+=7;
            else if(a[0]=='r')s+=1;
            else if(a[0]=='m')s+=2;
            else if(a[0]=='f')s+=3;
            else if(a[0]=='s' && a[2]=='l') s+=4;
            else if(a[0]=='l')s+=5;
            else if(a[0]=='s')s+=6;
        }

    int rez = s%8;

            if(rez==0)cout<<"do1";
            else if(rez==1)cout<<"re";
            else if(rez==2)cout<<"mi";
            else if(rez==3)cout<<"fa";
            else if(rez==4)cout<<"sol";
            else if(rez==5)cout<<"la";
            else if(rez==6)cout<<"si";
            else if(rez==7)cout<<"do2";

    return 0;
}
