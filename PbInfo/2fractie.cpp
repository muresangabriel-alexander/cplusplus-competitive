#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n1, n2, m1, m2;
    int s1, s2;
    int p1, p2;

    cin>>n1>>n2>>m1>>m2;

    //suma

s2=(n2*m2)/__gcd(n2,m2);
s1=(n1*(s2/n2) + m1*(s2/m2));
int simplii=__gcd(s1, s2);
s1/=simplii;
s2/=simplii;

cout<<s1<<' '<<s2<<'\n';

    // produs

p2 = n2*m2;
p1 = n1*m1;
int simpli=__gcd(p1,p2);
p2/=simpli;
p1/=simpli;

cout<<p1<<' '<<p2;
    return 0;
}
