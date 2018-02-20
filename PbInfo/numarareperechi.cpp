#include <iostream>
using namespace std;

int main() {
	int n, i=1, cnt1=0, cntfin=0, ultim;
	cin>>n;
	ultim = n%10;
	while(n!=0){
		cin>>n;
		 if(n!=0&&n%10==ultim){++cntfin;}
		 else{ultim = n % 10;}
	}
	
	cout<<cntfin;
	return 0;
}