#include <fstream>
#include <cmath>
//#include <iostream>
#include <limits.h>
using namespace std;
ifstream cin("relativ.in");
ofstream cout("relativ.out");


int main()
{
    int n;
    cin>>n;

    long long s=0;
    long long  s_max=0;
    int cnt=0;
    long long  minn = INT_MAX;


    for(int i =1; i<=n; ++i)
        {
            int x;
            cin>>x;
            if(x<=minn){
                    minn=x;
                    s+=x;
                    if(s>s_max)s_max=s;
                    s=x;
                    ++cnt;
                     }

            else
                {
                    s+=x;
                }

        }

        cout<<cnt<<'\n'<<s_max;



    return 0;
}
