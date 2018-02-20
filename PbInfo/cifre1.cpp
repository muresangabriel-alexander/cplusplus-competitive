#include <iostream>

using namespace std;
int a;
int cif;

int ult_cif(int n){  while(n>9)n/=10; return n;}


int main()
{
    int n, iMaxCif=-1, iMax=-1;
    cin>>n;

    for(int i=1; i<=n; ++i){
        cin>>a;
        cif=ult_cif(a);
        if(cif>iMaxCif){iMaxCif=cif; iMax=a;}
        if(cif==iMaxCif){iMax=max(iMax, a);}
    }

cout<<iMax;
    return 0;
}
