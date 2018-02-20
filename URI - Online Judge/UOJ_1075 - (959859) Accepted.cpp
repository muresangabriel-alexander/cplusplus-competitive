#include <iostream>

using namespace std;

int main()
{
    int a, i;
    cin>>a;

    for(i=1; i<=10000; i++){
        if(i%a==2){
            cout<<i<<'\n';
        }
    }

    return 0;
}
