#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n, x, sum=0;
cin>>n;

for(int i=1; i<=n; ++i){
cin>>x;
if(x%2==0){++sum;}
else {--sum;}

}

cout<<abs(sum);
    return 0;
}
