double nreal(int x, int y){

    int z=y, p=1;
    double fsd=y;
    while(z>0){z/=10; p*=10;}
    double i=fsd/p;
    double rez = x + i;
    return rez;


}