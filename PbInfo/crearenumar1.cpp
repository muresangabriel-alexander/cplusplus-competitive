#include <limits.h>
void numar(int n, int a[], int &k){
    int nr=0;
    int maxi=INT_MIN;
    int mini=INT_MAX;
    for(int i=0; i<n; ++i)maxi=max(maxi,a[i]), mini=min(mini,a[i]);


    int x[20];
    int kk=0;
    while(mini){x[++kk]=mini%10; mini/=10;}

    for(int i=kk; i>=1; --i)maxi=maxi*10+x[i];
    k=maxi;


}