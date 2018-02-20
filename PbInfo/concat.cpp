int concat(int a, int b){
int rez=a;
int copieb=b, cntb=0;
while(copieb>0){++cntb; copieb/=10;}
int p=1;
while(cntb--)p*=10;
rez=a*p+b;
return rez;
}
