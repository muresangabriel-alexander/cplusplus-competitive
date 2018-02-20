#include <fstream>
using namespace std;
ifstream cin("ciffrecv.in");
ofstream cout("ciffrecv.out");

int main()
{
    int fr1=0, fr2=0, fr3=0, fr5=0, fr7=0, n;

    while(cin>>n)
    { switch (n){
        case 1 : ++fr1; break;
        case 2 : ++fr2; break;
        case 3 : ++fr3; break;
        case 5 : ++fr5; break;
        case 7 : ++fr7; break;
    }}
    if (fr7!=0) {cout<<7<<' '<<fr7; return 0;}
    if (fr5!=0) {cout<<5<<' '<<fr5; return 0;}
    if (fr3!=0) {cout<<3<<' '<<fr3; return 0;}
    if (fr2!=0) {cout<<2<<' '<<fr2; return 0;}
    if (fr1!=0) {cout<<1<<' '<<fr1; return 0;}

}
