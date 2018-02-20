#include <iostream>

using namespace std;

int main()
{
    int abc , cnt0 =0, cnt1 = 0;
    cin>>abc;
    while (abc>0){
    if(abc%2==0)++cnt0;
    else ++cnt1;
    abc = abc /2;
    }

    cout<<cnt0<<' '<<cnt1;
    return 0;
}
