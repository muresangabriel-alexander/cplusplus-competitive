#include <iostream>

using namespace std;

int main()
{
    int n, iNFactorial=1;

    cin>>n;
    while (n>=1){
    iNFactorial=iNFactorial * n;
    n--;}
    cout<<iNFactorial<<'\n';
    return 0;
}
