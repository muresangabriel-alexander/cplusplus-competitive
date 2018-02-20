#include <fstream>
using namespace std;
ifstream cin("magic.in");
ofstream cout("magic.out");
#include <string.h>
//#include <iostream>
//using namespace std;

bool fr[12];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; ++i){
    char x;
    char lc;
    cin>>x;
    if(x>=48 && x<=57)fr[x-48]=1;
    else {lc=x-32; cout<<lc;}
    }

    cout<<'\n';
    int first=0;
    for(int i=1; i<=9; ++i)if(fr[i]){first=i; fr[i]=0; break;}
    cout<<first;


    if(first!=0)
    for(int i=0; i<=9; ++i)
       if(fr[i])cout<<i;
    return 0;
}
