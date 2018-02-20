#include <iostream>

using namespace std;

int main()
{
    int a, b;
    int k=0;
    cin>>a>>b;

    for(int i=a; i<=b; ++i){
        int copie_i=i;
        while(copie_i>0){
                        if(copie_i%10!=0){
                        if(i%(copie_i%10)!=0)break; }
                        copie_i/=10;
                        }
        if(copie_i==0)++k;
    }

    cout<<k;
    return 0;
}
