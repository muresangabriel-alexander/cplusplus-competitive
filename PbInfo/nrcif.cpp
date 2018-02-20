#include <iostream>

using namespace std;

int main()
{
    int nr;
    cin>>nr;

    if(nr>99 && nr<=999)cout<<3;
    else if (nr>9 && nr<=99)cout<<2;
    else if (nr<=9) cout<<1;
    return 0;
}
