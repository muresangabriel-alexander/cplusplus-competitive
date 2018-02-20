void oglindit(int n, int &p){

    int rez=0, i=10;
    while(n>0){ rez=(n%10) + rez*i; ; n/=10;}
    p=rez;
}