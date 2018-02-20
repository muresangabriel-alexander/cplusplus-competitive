int sum_div_prim(int n, int &s){
int si=0, divo=2;
while (n>=divo*divo){
if(n%divo==0){
while(n%divo==0)n/=divo;
si+=divo;}
++divo;
}
if(n!=1)si+=n;
s=si;
}