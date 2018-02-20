void perm (int &n){
int a[12];
int k=0;

while(n>0){a[++k] = n%10; n/=10;}

int rez = 0;
for(int i=k-1; i>=1; --i)rez = rez *10 + a[i];
rez  = rez*10 + a[k];
n = rez;

}