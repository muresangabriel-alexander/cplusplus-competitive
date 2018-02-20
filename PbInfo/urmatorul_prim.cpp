#include <iostream>

using namespace std;

int prim(int n){

if(n==1 || n==0)return 0;

if(n==2)return 1;
if(n % 2 == 0)
    return 0;

for(int i=3; i*i<=n; i+=2){
    if(n%i==0)return 0;
}
return 1;
}

int main()
{
    int n;
    cin>>n;
    for(int i = n + 1 ; i ; ++ i)
        if(prim(i))  {
            cout << i;
            return 0;
        }
    return 0;
}
