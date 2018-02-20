#include <algorithm>
int cmmnr(int n){
int x=0, rez=0, p=1, pos;
int cif[15];

while(n>0){cif[++x]=n%10; n/=10;}

sort(cif+1, cif+1+x);
int j=1;
while(cif[j]==0){++j; }
rez=cif[j];
for(int i=1; i<=x; ++i){if(i!=j){rez = rez*10+cif[i]; p*=10;}}

return rez;
}