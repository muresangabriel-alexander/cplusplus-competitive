#include <iostream>
using namespace std;

int main() {
	long long n, fact=1;
	cin>>n;
	
	for(int i = 2; i<=n; ++i){
		fact = fact * i;
	}
	
	cout<<fact;
	return 0;
}