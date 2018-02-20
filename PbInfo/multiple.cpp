#include <fstream>
using namespace std;
ifstream cin("multiple.in");
ofstream cout("multiple.out");

int main()
{
		int t;
		long long n, k;
		cin>>t;
		
		while (t--)
		{
			cin>>n>>k;
			cout<<(n/k+1)*k<<'\n';
		}
}
