int norocoase (int a, int b)
{
		int cnt = (b-a)/2;
		if(b%2==1 || a%2==1)++cnt;
		return cnt;

}
