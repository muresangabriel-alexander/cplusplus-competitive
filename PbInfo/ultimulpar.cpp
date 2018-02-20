#include <iostream>
using namespace std;

int main() {
	int n, x, ultim;
	bool cond=false;
	cin>>n;
	for(int i=1; i<=n; ++i){
		cin>>x;
		if(x%2==0 ) {ultim = x; cond = true;}
	}
	if(cond==true){
	cout<<ultim;}
	else {cout<<"IMPOSIBIL";}
	return 0;
}