int mp(int n)
{
	if(n>=12)return n-1;
    else
        return mp(mp(n+2));
}