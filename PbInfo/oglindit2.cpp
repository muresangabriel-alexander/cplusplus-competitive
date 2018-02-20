int oglindit(int n){
int olg=0;
  while(n>0){
  olg=olg*10+n%10;
  n/=10;}
return olg;
}