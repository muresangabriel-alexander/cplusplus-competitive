#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b;
    cin>>a;
    float x[a], y[a];
    for(b=1; b<=a; b++){
        cin>>x[b]>>y[b];}
    for(b=1; b<=a; b++){
        if(y[b]!=0){
            cout<<fixed<<setprecision(1)<<x[b]/y[b]<<'\n';
        }
        else{
            cout<<"divisao impossivel"<<'\n';
        }
    }
    return 0;
}
