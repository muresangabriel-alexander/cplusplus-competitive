#include <algorithm>

int cmmnr(int n){
int x=0, rez=0, p=1;
int cif[15];

while(n>0){cif[++x]=n%10; n/=10;}

sort(cif+1, cif+1+x);

for(int i=1; i<=x; ++i){rez += p*cif[i]; p*=10;}

return rez;
}