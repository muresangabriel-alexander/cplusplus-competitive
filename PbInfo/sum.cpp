#include <iostream>
#include <fstream>
using namespace std;
ifstream in("sum.in");
ofstream out("sum.out");

int main()
{
    int a, b;
    in>>a>>b;
    out<<a+b;
    return 0;
}
