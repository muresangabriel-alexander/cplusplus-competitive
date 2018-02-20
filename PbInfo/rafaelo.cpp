#include <iostream>

using namespace std;

int main()
{
 int s, nrMag, pret, nrcutii, nrMax=0, magazin;
    cin>>s>>nrMag;
    for(int i = 1; i<=nrMag; ++i){
      cin>>pret;
      nrcutii = s / pret;
      if(nrcutii>nrMax){
      nrMax = nrcutii;
      magazin = i;
      }
    }
    cout<<nrMax<<' '<<magazin;

    return 0;
}
