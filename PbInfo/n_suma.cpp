#include <iostream>
#include <fstream>

using namespace std;
ifstream in("n_suma.in");
ofstream out("n_suma.out");


int main() {
	int a, n, sum=0;
	in>>n;
	for(int i=1; i<=n; ++i){
		in>>a;
	sum = sum + a;}

	
	out<<sum;
	
	return 0;
}