#include <algorithm>
//using namespace std;

void ordonare(int v[1005],int n)
{
    sort(v,v+n);
    for(int i=0; i<n/2; ++i)swap(v[i],v[n-i-1]);


}