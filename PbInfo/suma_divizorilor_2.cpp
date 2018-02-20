#include <cmath>
void sum_div(int n, int &p){

int s_div=0;
        for(int i=1; i*i<n; ++i){if(n%i==0)s_div+=i+n/i;}
        if(sqrt(n)==floor(sqrt(n)))s_div+=sqrt(n);
p=s_div;
}