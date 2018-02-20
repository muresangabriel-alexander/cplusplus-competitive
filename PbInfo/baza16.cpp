#include <iostream>

using namespace std;
int a[65], k;

int main()
{
    int n, b, iMax=-1;
    cin>>n;


if(n==0){cout<<0; return 0;}


    while(n>0){
    a[++k]=n%16;
    n/=16;
    }


    for(int i=k; i>=1; --i){
    switch (a[i]){
    case 10: cout<<'A'; break;
    case 11: cout<<'B'; break;
    case 12: cout<<'C'; break;
    case 13: cout<<'D'; break;
    case 14: cout<<'E'; break;
    case 15: cout<<'F'; break;
    default:cout<<a[i];
    }
    }
    return 0;
}
