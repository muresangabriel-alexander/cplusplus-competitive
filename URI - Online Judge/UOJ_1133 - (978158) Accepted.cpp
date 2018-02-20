#include <iostream>

using namespace std;

int main()
{
    int a, b, aux;
    cin>>a;
    cin>>b;

    if(a>b){
        aux=a;
        a=b;
        b=aux;
    }
    for(int i=a+1; i<b; i++){
        if(i%5==2 || i%5==3){
            cout<<i<<'\n';
        }
    }
    return 0;
}
