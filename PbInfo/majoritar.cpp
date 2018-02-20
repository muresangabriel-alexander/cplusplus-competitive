#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
int a[100005];

int main()
{

int n;
int nr=0;
int cand = -1, k = 0;

cin>>n;

for(int i =0; i<n; ++i) cin>>a[i];



    for (int i = 0; i < n; i++) {
        if (k == 0) {
            cand = a[i];
            k = 1;
        } else if (a[i] == cand) {
            k++;
        } else
            k--;
    }


     for (int i = 0; i < n; i++) {
        if (a[i] == cand)
            nr++;
    }
    if (nr > n / 2) cout<<"DA "<<cand;
    else cout<<"NU";
    return 0;
}
