#include <iostream>

using namespace std;

int main()
{
    int h1, m1, x, h2, m2, y;
    cin>>h1>>m1>>x>>y;

    h2 = h1 + x;
    m2 = m1 + y;

    if(m2>=60)
    {
        h2 = h2 + m2/60;
        m2 = m2 %60;
    }
    if(h2>=24)
    {
        h2 = h2 %24;
    }
    cout<<h2<<' '<<m2;
    return 0;
}
