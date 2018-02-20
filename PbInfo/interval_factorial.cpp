void interval(int n, int &a, int &b)
{
    a=1;
    for(int i=1; i<=n-1; ++i)a*=i;
    ++a;

    b=1;
    for(int i=1; i<=n+1; ++i)b*=i;
    --b;
}