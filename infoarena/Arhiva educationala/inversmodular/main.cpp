#include <fstream>

using namespace std;
ifstream cin ("inversmodular.in");
ofstream cout("inversmodular.out");
long long a, n;

void gcd(long long& x, long long& y, int a, int b)
{
	if(!b)
		x=1, y=0;
	else
	{
		gcd(x, y, b, a%b);
		long long aux =x;
		x=y;
		y = aux-y*(a/b);
	}
}
int main()
{
	long long inv=0, ins;
	cin>>a>>n;
	gcd(inv, ins, a, n);

	while(inv<=0)
		inv = n + inv%n;
	cout<<inv;

	return 0;

}
