#include <iostream>

using namespace std;
int fra[11], frb[11];
int main()
{
    int n, m;
    cin>>n>>m;
    if(n==0){cout<<0; return 0;}
    while(n>0){
        ++fra[n%10];
        n/=10;
    }

    if(m==0){cout<<0; return 0;}
    while(m>0){
        ++frb[m%10];
        m/=10;
    }


    for(int i=0; i<=9; ++i){if(fra[i]>=1 && frb[i]>=1){cout<<"DA"<<' '; return 0;}}
    cout<<"NU";
    return 0;
}
