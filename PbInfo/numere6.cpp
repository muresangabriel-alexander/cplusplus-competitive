//#include <iostream>
#include <fstream>
using namespace std;
ifstream cin("numere6.in");
ofstream cout("numere6.out");

int fr[14];

int main()
{
    int n, m;
    cin>>n>>m;
    if(n==0)++fr[0];
    while (n>0){++fr[n%10]; n/=10;}
    if(m==0)++fr[0];
    while (m>0){++fr[m%10]; m/=10;}

    for(int i=9; i>=0; --i){
        for(int j=1; j<=fr[i]; ++j){cout<<i;}
    }

    return 0;
}
