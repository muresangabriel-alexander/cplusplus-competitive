#include <algorithm>
int suma(int v[], int n, int m)
{
    int s=0;
    sort(v, v+n);
    for(int ii=0; ii<m; ++ii){
        s+=v[ii];
    }
    return s;

}