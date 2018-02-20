void detcifre(int n, int &p, int &u){

    int isp, isi=0;
    isp=n;
    while(isp>9){ isp/=10;}
    p=isp;
    u=n%10;
}