#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("graf_partial_2.in");
ofstream cout("graf_partial_2.out");

int n, a[101][101], x, y;
int g[101];
int minim = 0x3f3f3f3f, maxim = -1;
int fn;

int main()
{
    cin >> n;
    while( cin >> x >> y )
        a[x][y] = a[y][x] = 1;

    for( int i = 1; i <= n; ++i )
        for( int j = i + 1; j <= n; ++j )
            if( a[i][j] && a[j][i] )
                g[i]++, g[j]++, maxim = max(maxim, max(g[i], g[j]));


    for( int i = 1; i <= n; ++i )
        for( int j = i + 1; j <= n; ++j )
            if( a[i][j]  && ((g[i] == maxim || g[j] == maxim)))
                a[i][j] = a[j][i] = 0, fn++;


    cout << fn << '\n';
    for( int i = 1; i <= n; ++i )
    {
        for( int j = 1; j <= n; ++j )
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}
