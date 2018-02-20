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
int a[1005];


int main() {

    int n;
    in>>n;
    for(int i=1; i<=n; ++i)in>>a[i];

    bool nimica=1;
    for(int i=2; i<=n; ++i)
    {
        if(a[i-1]>a[i])out<<i<<' ',nimica=0;
    }

    if(nimica)out<<0;
    return 0;
    }
