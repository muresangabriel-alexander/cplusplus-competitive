int elimcif (int n, int c)
{
    if(n<10){ if(n!=c)return n; else return 0;}
    else{
    int sol=0;
    if(n%10!=c)sol=elimcif(n/10,c)*10+n%10;
    else sol = elimcif(n/10,c);
    return sol;}

}