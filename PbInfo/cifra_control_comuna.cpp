
int sum_cifra_control(int a, int b)
{
    int cnt=0;
    for(int i=a; i<=b; ++i)
    {
        if(i%9==a || (i%9==0 && a==9))++cnt;
    }


    return cnt;
}
