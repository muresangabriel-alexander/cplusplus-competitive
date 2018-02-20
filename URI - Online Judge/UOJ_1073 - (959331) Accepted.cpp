#include <iostream>

using namespace std;

int main()
{
    int n , i, square;
    cin>>n;

    for(i=1; i<=n; i++){
        if(i%2==0){
           square=i*i;

            cout<<i<<"^"<<"2"<<" = "<<square<<'\n';}
    }

    return 0;
}
