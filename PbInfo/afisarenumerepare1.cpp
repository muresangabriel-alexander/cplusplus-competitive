void afisare(int a, int b){
if(a>b)swap(a,b);
if(a%2==1)++a;
if(b%2==1)--b;

for(int i=a; i<=b; i+=2)cout<<i<<' ';

}