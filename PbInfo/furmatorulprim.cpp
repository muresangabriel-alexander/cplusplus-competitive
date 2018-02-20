
bool prim(int n){
if(n==1 || n==0)return 0;
if(n==2)return 1;
if(n%2==0)return 0;
for(int d=3; d*d<=n; d+=2)if(n%d==0)return 0;
return 1;
}

int nr_prim(int n){
    if(n==0 || n==1)return 2;
    bool ok=0;
    if(n%2==0){++n; ok=1;}
    if(!ok)n+=2;

    while(!prim(n))n+=2;
    return n;
}