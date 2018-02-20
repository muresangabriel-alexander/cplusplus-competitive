#include <algorithm>
//using namespace std;

bool permutare(int v[105],int n)
{
    int s=0;
    for(int i=0; i<n; ++i)if(v[i]==i+1)return 0;
    sort(v,v+n);
    for(int i=0; i<n-1; ++i)if(v[i]+1!=v[i+1])return 0;
    return 1;

}