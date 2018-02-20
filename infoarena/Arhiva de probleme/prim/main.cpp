#include <fstream>

using namespace std;
ifstream cin("prim.in");
ofstream cout("prim.out");

bool er[1299905];
int prime_arr[100005];


int main()
{
    int k;
    cin>>k;
    int kk=0;
    for(int i=2; kk<=k+1; ++i)
    if(!er[i])
        {
            prime_arr[++kk]=i;
            for(int j=i+i; j<=1299900; j+=i)er[j]=1;
        }

    cout<<(long long )prime_arr[k+1]*prime_arr[k+1];


    return 0;
}
