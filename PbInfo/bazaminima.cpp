#include <iostream>

using namespace std;

int main()
{
    int n, x, cif , iMax = 0;
    cin>>n;

    for(int i = 1; i<=n; ++i){
       cin>>x;
       while (x>0){
       cif = x%10;
       if(cif>iMax) iMax = cif;
       x=x/10;
       }
    }
    cout<<iMax+1;

    return 0;
}
