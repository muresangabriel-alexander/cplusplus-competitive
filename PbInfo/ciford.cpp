#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
 int nr, cif[3];

    cin>>nr;
    cif[1]=nr%10;
    cif[2]=(nr/10)%10;
    cif[3]=(nr/100)%10;
    sort (cif + 1, cif+1 + 3);
    cout<<cif[1]<<' '<<cif[2]<<' '<<cif[3];
    return 0;
}
