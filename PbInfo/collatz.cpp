#include <iostream>

using namespace std;

int main()
{
    int n, cnt=1;
    cin>>n;
    while(n>1){
    if(n%2==0){n=n/2;}
    else{ n = n*3 + 1;}
    ++cnt;
    }
    cout<<cnt;
    return 0;
}
