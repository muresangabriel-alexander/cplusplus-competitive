#include <fstream>

using namespace std;
ifstream cin("distantapuncte.in");
ofstream cout("distantapuncte.out");

int main()
{
    int x1, x2, y1, y2;
    cin>>x1>>y1>>x2>>y2;

    cout<<(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    return 0;
}