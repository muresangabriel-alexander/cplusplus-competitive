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

    double a,b,c;
    cin>>a>>b>>c;

    double delta=b*b - 4*a*c;

    if(delta<0){cout<<"Nu are solutii reale\n"; return 0;}
    if(delta == 0){cout<<fixed<<setprecision(2)<<"Radacina dubla "<<(-b+sqrt(delta))/(2*a)<<'\n'; return 0;}
    if(delta>0)
        {
            double x1=(-b+sqrt(delta))/(2*a);
            double x2=(-b-sqrt(delta))/(2*a);
            cout<<fixed<<setprecision(2)<<max(x1,x2)<<' '<<min(x1,x2);
            return 0;
        }

    }
