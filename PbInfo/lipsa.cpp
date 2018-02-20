#include <fstream>

using namespace std;
ifstream cin("lipsa.in");
ofstream cout("lipsa.out");

int main()
{
    long long n;
    cin>>n;

    long long s=0;
    for(int i=1; i<n; ++i){
    long long x;cin>>x;
    s+=x;
    }
    cout<<n*(n+1)/2-s;
    return 0;
}
