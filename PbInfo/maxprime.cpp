bool prim(int n){
if(n==1 || n==0)return 0;
if(n==2)return 1;
if(n%2==0)return 0;
for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
return 1;
}

void sub(int n, int &a, int &b){
a=n-1;
while(!prim(a))--a;
  b=a-1;
while(!prim(b))--b;
}