void cifminmax(int x, int &p, int &u){

    int iMax=0, iMin=9, n=x;
    while(n>0){if(iMax<=n%10)iMax=n%10; if(iMin>=n%10)iMin=n%10; n/=10;}
    p=iMax;
    u=iMin;
    if(x==0){p=0; u=0;}
}
