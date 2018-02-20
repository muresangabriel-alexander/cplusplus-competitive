int cifmin(int n)
{
    int cif_max=0;
    if(n<10)return n;
    return min(n%10,cifmin(n/10));
}
