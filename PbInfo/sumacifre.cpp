void sumcif(int n, int &sp, int &si){

    int isp=0, isi=0;

    while(n>0){if((n%10)%2==0)isp+=n%10; else isi+=n%10; n/=10;}
    sp=isp;
    si=isi;
}