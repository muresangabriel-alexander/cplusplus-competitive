#include <iostream>

using namespace std;

int main()
{
    int n, i=1, poz;

    cin>>n;
    int cons = n*2;
    int limit = i*i + i;

    while (cons>=limit) {i = i + 1; limit = i*i + i;}

    poz = n - ((i-1)*i)/2;
if(n != 1){
    cout<<i - poz + 1;} else {cout<<1;}


    return 0;
}
