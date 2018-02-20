void sub(int n, int v[105], int x)
{
    int cpy[105], k=0;
    for (int i=0; i<n; ++i)if(v[i]==x)cpy[k++]=x,v[i]=-1;
    for (int i=0; i<n; ++i)if(v[i]!=-1)cpy[k++]=v[i];

    for(int i=0; i<n; ++i)v[i]=cpy[i];
}