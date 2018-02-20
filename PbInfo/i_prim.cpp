bool prim(int n){
if(n==1 || n==0)return 0;
if(n==2)return 1;
if(n%2==0)return 0;
for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
return 1;
}


int i_prim(int n){
    int p1=n, p2=n;
    if(prim(n))return 0;
    while(!prim(p1))--p1;
    while(!prim(p2))++p2;
    return p2-p1;
}