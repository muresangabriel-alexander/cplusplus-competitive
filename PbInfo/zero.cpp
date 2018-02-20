void zero(int n, int v[105])
{
    int par [52], kp=0, impar[52], ki=0;
    for(int i=1; i<=2*n; ++i)if(v[i]%2==0)par[kp++]=v[i]; else impar[ki++]=v[i];

    kp=0, ki=0;
    for(int i=1; i<=2*n;++i)if(i%2==0)v[i]=par[kp++];  else v[i]=impar[ki++];

}