#include <iostream>
using namespace std;

int main() {
	long long n, fact=1, sum=1;
	cin>>n;
	
	for(int i = 2; i<=n; ++i){
		for (int j = 2; j<=i; ++j){
			fact = fact *j;
		}
		sum = sum + fact;
		fact= 1;
	}
	
	cout<<"Rezultatul este "<<sum;
	return 0;
}