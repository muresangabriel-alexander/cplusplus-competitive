#include <fstream>
#include <cmath>
#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
//ifstream cin("smartphone.in");
//ofstream cout("smartphone.out");

int a[10005];

int main()
{
    long long n;
    cin>>n;

    int aux = n; int p=1;
    int rez=0;
    while (n>0)
        {
            n/=10;
            rez+=p*(n%10);
            p*=10;
            rez += p*(aux%10) ;
            p*=10;
            aux/=100;
            n/=10;
        }

        cout<<rez;
    return 0;
}
