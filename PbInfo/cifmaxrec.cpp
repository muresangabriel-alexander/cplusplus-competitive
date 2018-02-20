int cifmax(int n)
{
    int cif_max=0;
    if(n<10)return n;
    return max(n%10,cifmax(n/10));
}
