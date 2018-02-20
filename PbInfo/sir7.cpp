#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <algorithm>


using namespace std;

int main() {

    int n, p;
    cin>>p>>n;

    if(n%2==0)cout<<(n/2+n-2)<<p;
    else cout << (n/2+n-1)<<p;
    }
