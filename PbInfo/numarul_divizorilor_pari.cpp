#include <iostream>
using namespace std;

#include <cmath>
int nr_div_imp(int n, int &rez){
int cnt=0;
        for(int i=1; i*i<n; ++i)
        if(n%i==0){ if (i%2==0) cnt++;
        if((n/i)%2==0)cnt++;
    }
    int m=floor(sqrt(n));
if(sqrt(n)==floor(sqrt(n))&& m%2==0)cnt++;

rez=cnt;

}

int main()
{
    int n, cnt=0;
    cin>>n;
    nr_div_imp(n, cnt);
    cout<<cnt;
    return 0;
}
