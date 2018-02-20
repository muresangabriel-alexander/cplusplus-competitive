#include <iostream>

using namespace std;

int main()
{
    int a, b, c, S, na, nb, nc;
    cin>>a>>b>>c>>S;

    nc = S / c;
    S = S % c;
    nb = S / b;
    S = S % b;
    na = S /a;
    cout<<na<<" "<<nb<<" "<<nc;
    return 0;
}
