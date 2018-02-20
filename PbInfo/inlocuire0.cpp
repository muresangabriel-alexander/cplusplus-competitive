void num(int n, int v[105])
{
    int val = v[0];
    for (int i=0; i<n; ++i)if(v[i]<=val)v[i]=0;
}