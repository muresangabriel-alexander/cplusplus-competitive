#include <iostream>
using namespace std;

int n , m , a[101][101], v[10001] , f[10001] , k;

int main()
{
	cin >> n >> m;
	for(int i = 1 ; i <= n ; ++i)
		for(int j = 1 ; j <= m ; ++j)
			cin >> a[i][j];
	//contruim vectorii v[] si f[] cu valorile distincte din matrice, respectiv frecventele lor de aparitii
	k = 0;
	for(int i = 1 ; i <= n ; ++i)
		for(int j = 1 ; j <= m ; ++j)
		{
			int poz = 0;
			for(int p =1 ; p <= k && poz == 0 ; p ++)
				if(v[p] == a[i][j])
					poz = p;
			if(poz == 0)
			{
				k ++; v[k] = a[i][j]; f[k] = 1;
			}
			else
				f[poz] ++;
		}
	//determina frecventa maxima si cel maim mare element cu acea frecventa
	int Max = f[1], imax  = 1;
	for(int i = 2 ; i <= k ; i++)
		if(f[i] > Max)
			Max = f[i], imax = i;
		else
			if(f[i] == Max)
				if(v[i] > v[imax])
					imax = i;
		
	
	//afisam rezultatul
	cout << v[imax];
	return 0;
}