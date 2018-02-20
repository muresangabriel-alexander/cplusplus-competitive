int suma(int v[], int n, int i, int j)
{
    int s=0;
    for(int ii=1; ii<=n; ++ii){
        if(!(ii>=i && j>=ii))s+=v[ii];
    }
    return s;

}