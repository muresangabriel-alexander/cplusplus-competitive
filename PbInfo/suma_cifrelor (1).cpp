void sum_cif(int n, int &su){
    int s=0;
    while(n>0){s+=n%10; n/=10;}
    su=s;
}
