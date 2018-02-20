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
	//determina frecventa maxima 
	int Max = f[1];
	for(int i = 2 ; i <= k ; i++)
		if(f[i] > Max)
			Max = f[i];
	//determinam elementele care apar de Max ori. Refolosim vectorul v[]
	int p = 0;
	for(int i =1 ; i <= k ; i ++)
		if(f[i] == Max)
		{
			p ++; v[p] = v[i];
		}
	//sortam vectorul v[] cu p elemente
	for(int i = 1 ; i < p ; i++)
		for(int j = i + 1; j <= p ; j ++)
			if(v[i] > v[j])
			{
				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
	
	//afisam vectorul v[] cu p elemente
	for(int i =1 ; i <= p ; i ++)
		cout << v[i] << " ";
	return 0;
}