void afisare(int x, int b){
bool a[1006]; a[1]=1;
if(x>b)swap(x,b);
for(int i=2; i<=b; ++i)a[i]=0;

for(int i=2; i<=b; ++i){if(a[i]==0){for(int j=i+i; j<=b; j+=i)a[j]=1;}}

for(int i=x; i<=b; ++i)if(a[i]==0)cout<<i<<' ';


}