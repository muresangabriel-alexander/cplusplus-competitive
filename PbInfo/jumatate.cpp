#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, avcnt, cnt=0, p=1, j1= 0, j2=0;
    cin>>n;
    avcnt = n;
    while(avcnt > 0){++cnt; avcnt /= 10;}

    for(int i =1; i<=cnt/2; ++i){
        j1 = p*(n%10) + j1;
        p *=10; n /= 10;
    }
if(cnt %2 == 1) {n /= 10;}
p = 1;

     for(int i =1; i<=cnt/2; ++i){
        j2 = p*(n%10) + j2;
        p *=10; n /= 10;
    }
cout<<abs(j2-j1);

    return 0;
}
