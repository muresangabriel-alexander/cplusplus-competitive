#include <iostream>

using namespace std;

int main()
{
    int n, cif, gasit=0;
    cin>>n>>cif;

    int rez=0;
    int p=1;

    while(n>0){
    if(n%10==cif){n/=10;}
    else{
        rez+=n%10*p;
        n/=10;
        p*=10; gasit=1;
        }

    }
if(rez==0 && gasit==0){cout<<-1; return 0;}
    cout<<rez;
    return 0;
}
