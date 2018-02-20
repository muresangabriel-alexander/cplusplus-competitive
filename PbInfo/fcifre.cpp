int nr_cif(int n, int k){
int cnt=0;
while(n>0){if(n%10!=0 && k%(n%10)==0)++cnt; n/=10;}
return cnt;
}
