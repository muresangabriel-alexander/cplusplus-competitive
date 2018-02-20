#include <iostream>

using namespace std;

int main()
{
    int an;
    cin>>an;
    if(an%4==0 && an%100!=0 || an%400==0) cout<<"bisect";
    else cout<<"nebisect";

    return 0;
}
