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
    cin>>n;

    ///section 1
    for(int row=1; row<=n; ++row)
        {
            for(int i=1; i<=row; ++i)cout<<'*';
            cout<<'\n';
        }

    for(int row=1; row<=n; ++row)
        {
            for(int i=1; i<=n ; ++i)cout<<' ';
            for(int i=1; i<row; ++i)cout<<' ';
            for(int i=row; i<=n; ++i)cout<<'*';
            cout<<'\n';
        }
    return 0;
    }
