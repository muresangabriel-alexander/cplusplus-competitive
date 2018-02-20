#include <fstream>

using namespace std;
ifstream cin("nrsufix.in");
ofstream cout("nrsufix.out");


bool sufix(int a, int b){
    if(a==b)return 1;

    while(a>0){
        if(a%10!=b%10)return 0;
        a/=10; b/=10;
    }

    return 1;


}

int main()
{
    int x;
    int y, sol=-1;
    cin>>x;

    while(cin>>y){
        if(sufix(x,y))sol=y;
    }

    if(sol==-1)cout<<"nu exista";
    else
    cout<<sol;

    return 0;
}
