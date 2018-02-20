void valuri(int n, int v[105])
{
    int x=1;
    for(int i=0; i<n*2; i+=2)v[i]=x,x+=2;
    x=2*n;
    for(int i=1; i<=n*2; i+=2)v[i]=x,x-=2;
}