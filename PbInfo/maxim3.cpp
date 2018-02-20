#include <iostream>
#include <fstream>

using namespace std;
ifstream in("maxim3.in");
ofstream out("maxim3.out");

int main()
{
    int a , b, c;
    in>>a>>b>>c;

    out<<max(a, max(b,c));

    return 0;
}
