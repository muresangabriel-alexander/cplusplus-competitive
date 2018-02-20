#include <iostream>

using namespace std;

int main()
{
    int n, x, ap=0, av;
    cin>>n;
av = n;
while(av>99){
av/=10;
}

    while(av>0){
    ap+=av%10;
    av/=10;
    }
cout<<ap;
    return 0;
}
