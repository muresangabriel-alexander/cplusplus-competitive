#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
ifstream cin("permutari.in");
ofstream cout("permutari.out");

int n;
vector <int> v;


int main()
{
    cin>>n;
    for(int i=1; i<=n; ++i)
    v.push_back(i);

    do{
        for(int i=0; i<n; ++i)
            cout<<v[i]<<' ';
        cout<<'\n';
    }while (next_permutation(v.begin(),v.end()));
    return 0;
}
