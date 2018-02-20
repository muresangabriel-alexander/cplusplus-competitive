//#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

ifstream cin ("putere.in");
ofstream cout("putere.out");


int main()
{
    int a, b;
    int s=0;
    int p=1;
    cin>>a>>b;
    p=pow(a%10,b%10);
    while(a>0 && b>0){
        s+=pow(a%10,b%10);
        a/=10;
        b/=10;

    }
    cout<<p<<'\n'<<s;
    return 0;
}
