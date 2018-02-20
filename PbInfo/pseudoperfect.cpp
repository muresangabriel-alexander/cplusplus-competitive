#include <iostream>
using namespace std;

int main() {
	int n, s_div=1;
	cin>>n;
	
	for(int i = 2 ; i * i <= n ; ++ i)
		if(n % i == 0) {
			s_div += i;
			s_div += (n / i);
		}
	if(s_div % n == 0) cout<<"DA";
	else cout<<"NU";
	return 0;
}					