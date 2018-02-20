#include <fstream>
#include <limits.h>
using namespace std;

ifstream cin("maxim5.in");
ofstream cout("maxim5.out");

int main()
{
    int rez, x, cnt=0, iMax=INT_MIN, cntMin=INT_MAX;

    while(cin>>x){
        if(x == 0) {
            if(cntMin > cnt) {
                cntMin = cnt;
                rez = iMax;
            } else if(cntMin == cnt)
                rez = max(rez, iMax);
            iMax = INT_MIN;
            cnt = 0;
            continue;
        }
        ++cnt;
        if(iMax < x)
            iMax = x;
    }
    cout<<rez;
    return 0;
}
