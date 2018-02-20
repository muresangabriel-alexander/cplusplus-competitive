#include <iostream>

using namespace std;

int main()
{
    int n, x[100];
    bool condition = false;
    cin>>n;

    for(int i=1; i<=n; ++i){
       cin>>x[i];
    }

    for(int i=1; i<=n; ++i){
        if(x[i]%2==0){cout<<x[i]; condition = true; break; }
    }

    if(condition == false ) {cout<<"IMPOSIBIL";}
    return 0;
}
