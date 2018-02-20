#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
/*ifstream cin("nrdiv.in");
ofstream cout("nrdiv.out"); */


int a[1004], sdiv[1004];



int sum_DIV(int n){
int s_div=0;
        for(int i=1; i*i<n; ++i){if(n%i==0)s_div+=i+n/i;}
        if(sqrt(n)==floor(sqrt(n)))s_div+=sqrt(n);

    return s_div;

}



int main()
{
    int n;
    cin>>n;for(int i=1; i<=n; ++i){cin>>a[i]; sdiv[i]=sum_DIV(a[i]);}

   for(int i=1; i<=n; ++i)
    for(int j=i+1; j<=n; ++j){
        if(sdiv[i]>sdiv[j] || sdiv[i]==sdiv[j] && a[i]>a[j]){swap(sdiv[j], sdiv[i]); swap(a[j], a[i]);}
    }
    for(int i=1; i<=n; ++i)cout<<a[i]<<' ';





    return 0;
}
