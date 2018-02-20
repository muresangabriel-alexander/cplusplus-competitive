#include <fstream>
//#include <iostream>
using namespace std;
ifstream fin("euclid3.in");
ofstream fout("euclid3.out");

int euclid(int a, int b, int& x, int& y)
{
    if(b==0)
    {
        x=1, y=0;
        return a;
    }

    int xs, ys, d;
    d = euclid(b,a%b,xs,ys);
    x=ys;
    y=xs-(a/b)*ys;
    return d;
}


int main() {
    int T;

    for(fin>>T; T; --T)
    {
        int a, b, c;
        fin>>a>>b>>c;

        int d,x,y;
        d=euclid(a,b,x,y);


        switch(c%d)
        {
        case false: fout<<x*(c/d)<<' '<<y*(c/d)<<'\n'; break;
        default:fout<<0<<' '<<0<<'\n'; break;
        }
    }


    return 0;
}
