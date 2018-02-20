#include <iostream>

using namespace std;

int main()
{
    int n, x, secv=0, secvMax=0;

    cin>>n;
    for(int r=1; r<=n; ++r){
        cin>>x;
        if(x%2==0){secvMax=max(secvMax,secv); secv=0;}
        else {
            int test=1, rez;
            while(test<=x){rez = test; test=test*2+1;}

            if(rez==x)++secv;
            else{secvMax=max(secvMax,secv); secv=0;}
        }
    }
    cout<<secvMax;
    return 0;
}
