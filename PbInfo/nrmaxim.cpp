int nrmaxim(int n)
{
    int maxx = n; 
    int p = 1;
    int cpy = n; 
    int cnt = 0;
    
    while ( cpy > 9)
    {
        p = p * 10;
        cpy = cpy / 10;
        cnt++;
    }
    
    while ( cnt > 0 )
    {
        n = (n % p ) * 10 + n / p;
        if ( n > maxx ) maxx = n;
        cnt--;
    }
    return maxx;

}
