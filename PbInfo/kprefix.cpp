void prefix(int n, int k, int &si){

    int isp=0, isi=0, cnt=0;
    isi=n;
    while(isi>0){++cnt; isi/=10;}

    for(int i=1; i<=cnt-k; ++i){n/=10;}

    //while(n>0){if((n%10)%2==0)isp+=n%10; else isi+=n%10; n/=10;}
    si=n;
}