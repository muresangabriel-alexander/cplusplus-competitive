#include <iostream>
using namespace std;

int main() {
	int n, fact=1, sum=0, i=1;
	cin>>n;
	
	while(i*i<=n){
		sum = sum + i*i;
		++i;
	}
	
	cout<<"Rezultatul este "<<sum;
	return 0;
}