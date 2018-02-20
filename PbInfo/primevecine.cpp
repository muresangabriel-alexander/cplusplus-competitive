bool prim(int n){
    if(n==1 || n==0)return 0;
    if(n==2)return 1;
    if(n%2==0)return 0;
    for(int i=3; i*i<=n; i+=2)if(n%i==0)return 0;
    return 1;
}


int sub(int n, int &a, int &b){

    int aa, bb;
   // if(n%2==0)--n;
    for(int i=n-1; i>=2; --i)if(prim(i)){aa=i; break;}
    for(int i=n+1; ; ++i)if(prim(i)){bb=i; break;}
    a = aa;
    b = bb;
}