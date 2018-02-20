#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x;
    double y;

    cin >> x >> y;

    switch (x){
    case 1: cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*4<<'\n';
    break;
    case 2: cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*4.50<<'\n';
    break;
    case 3: cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*5<<'\n';
    break;
    case 4: cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*2<<'\n';
    break;
    case 5: cout<<"Total: R$ "<<fixed<<setprecision(2)<<y*1.5<<'\n';
    break;
    }

    return 0;
}
