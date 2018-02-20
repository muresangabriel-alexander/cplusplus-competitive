#include <iostream>
#include <algorithm>

using namespace std ;

const int NMAX = 3 ;

int  V[NMAX] ;

int main()
{
     int a, b, c;
	for(int i = 1 ; i<= 3 ; ++ i)
	cin >> V[i];
a=V[1]; b=V[2]; c=V[3];
	sort(V  + 1 , V + 3 + 1) ;

	for(int i = 1 ; i <= 3; ++ i)
	  cout << V[i] << '\n' ;
	  cout<<'\n';
	  cout<<a<<'\n';
	  cout<<b<<'\n';
	  cout<<c<<'\n';

	return 0;
}
