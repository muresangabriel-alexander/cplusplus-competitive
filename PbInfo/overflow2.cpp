#include <iostream>
#include <cmath>
using namespace std;
bool iibun(unsigned long long a, unsigned long long b)
{
    unsigned long long limi=(unsigned long long)18446744073709551615;
    for(unsigned long long i=1; i<=b ; ++i)
        limi/=a;
    if(limi<1)
    	return 0;
    else
    	return 1;
}

unsigned long long  poww(unsigned long long  x, unsigned long long  n)
{
	unsigned long long  p = 1 ;
	while (n > 0)
	{
		if (n & 1) // n este impar
		{
			p *= x;
			n-- ;
		}
		x = x * x ;
		n >>= 1 ; // sau n = n / 2
	}
	return p ;
}



int main()
{

    unsigned long long n;
    unsigned long long a,b;

    cin>>n;
    for(unsigned long long i=1; i<=n; ++i){
    	unsigned long long k; cin>>k;
       	unsigned long long limi=(unsigned long long)18446744073709551615;
       	unsigned long long s=0;
       	bool okappa=1;
       	for(int i=1; i<=k; ++i)
        {
        	cin>>a>>b;
        	if( a==1 )--limi;
        	else if(a==0)continue;
           else if(iibun(a,b) && okappa)
            {
            	unsigned long long sc=poww(a,b);
            	if(s <= limi - sc)
            		s += sc;
            }
            else
            	okappa = 0;

        }
        if(okappa)
        	cout<<s<<'\n';
        else
        	cout<<"Overflow!"<<'\n';
    }
    return 0;
}
