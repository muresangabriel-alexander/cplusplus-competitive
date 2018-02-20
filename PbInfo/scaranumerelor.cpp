#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int n;
    cin>>n;


    for(int c=1; c<=n; ++c)
        {
            for(int i=1; i<=c; ++i)
                {
                    for(int j=1; j<=c; ++j)cout<<c;
                    cout<<"\n";
                }

        }
    return 0;
    }
