#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, rex, iMax=0;
    cin>>n;
    for(int i=2; i<=n; ++i){
        int cnt=1;
        for(int x=2; x*x<=i; ++x)   {if(i%x==0)cnt+=2;}
       if(sqrt(i)==floor(sqrt(i)))--cnt;
        if(cnt>iMax){iMax=cnt; rex=i;}
    }

    cout<<rex;
    return 0;
}
