#include <iostream>

using namespace std;

int main()
{
    int i=1, n;
    cin>>n;

while(n>0){
    cout<<i<<" "<<i*i<<" "<<i*i*i<<'\n';
    i++;
    n--;
}
        return 0;
}
