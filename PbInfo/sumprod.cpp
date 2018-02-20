#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int nr, cif[3];

    cin>>cif[1]>>cif[2]>>cif[3];
sort (cif + 1, cif+1 + 3);
    cout<<cif[2]*cif[3]+cif[1];
    return 0;
}
