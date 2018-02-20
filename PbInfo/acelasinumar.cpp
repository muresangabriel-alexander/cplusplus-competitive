#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;
ifstream in("comori1.in");
ofstream out("comori1.out");
//int a[1005];


int main() {

    long long  n, k;
    cin>>n>>k;

    long long  cpy=n;

    for(int i =1; i<=k; ++i)
    {
     int x;
     cin>>x;
     n+=x;
    }
    if(n==cpy)cout<<"DA";
    else cout<<"NU";

    return 0;
    }
