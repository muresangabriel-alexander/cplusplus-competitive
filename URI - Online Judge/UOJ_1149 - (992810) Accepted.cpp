#include <iostream>

using namespace std;

int main()
{
    int a, n=0, i, sum=0;

    cin>>a;
    while (n==0){
        cin>>n;
    }
    i=a;
    while (n>0){
        
        sum=sum+i;
        i++;
        n--;
    }
    cout<<sum<<'\n';



    return 0;
}
