#include <iostream>

using namespace std;

int main()
{
    int a, n=0, i, sum=0, contor=0;

    cin>>a;
    cin>>n;
    while (n<=a){
        cin>>n;
    }
    i=a;
    while (sum<n){
        
        sum=sum+i;
        i++;
        contor++;
    }
    cout<<contor<<'\n';
    return 0;
}
