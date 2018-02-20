#include <iostream>

using namespace std;

int main()
{
    int nr, cif1, cif2, cif3;
    cin>>nr;
    cif1=nr%10;
    cif2=(nr/10)%10;
    cif3=(nr/100)%10;

    cout<<max(cif1, max(cif2,cif3));
    return 0;
}
