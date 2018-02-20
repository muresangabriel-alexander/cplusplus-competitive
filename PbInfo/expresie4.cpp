#include <iostream>
using namespace std;

int main() {
	int n, s=0, original, i =1;
	cin>>n;
	original = n;
	while(original>=i){
		s = s + (i*n);
		--n;
		++i;
	}
	
	cout<<"Rezultatul este "<<s;
	return 0;
}