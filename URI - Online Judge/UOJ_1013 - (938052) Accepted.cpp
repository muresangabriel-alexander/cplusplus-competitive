#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    int iMaiorAB, iMaior;

    cin>>a>>b>>c;

    iMaiorAB=(a+b+abs(a-b))/2;
    iMaior=(iMaiorAB+c+abs(iMaiorAB-c))/2;
    cout<<iMaior<<" eh o maior"<<'\n';
    return 0;
}
