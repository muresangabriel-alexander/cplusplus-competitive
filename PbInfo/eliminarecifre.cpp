void P(int &x, int p){

    int n=x, rez=0, i=1;
    bool ok=true;
    while(n>0){if(n%10==p)n/=10; else {rez+=(n%10)*i; i*=10; ok=false; n/=10;} }
    x=rez;
}

