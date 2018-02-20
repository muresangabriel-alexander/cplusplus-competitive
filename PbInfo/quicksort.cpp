#include <iostream>
using namespace std;

int n , v[100005];

void QuickSort(int st, int dr)
{
	if(st < dr)
	{
		//determinam pivorul
		int m = (st + dr) / 2;
		int aux = v[st];
		v[st] = v[m];
		v[m] = aux;
		int i = st , j = dr, d = 0;
		while(i < j)
		{
			if(v[i] > v[j])
			{
				aux = v[i]; 
				v[i] = v[j];
				v[j] = aux;
				d = 1 - d;
			}
			i += d;
			j -= 1 - d;
		}
		QuickSort(st , i - 1);
		QuickSort(i + 1 , dr);
	}
}

int main(){
	cin >> n;
	for(int i = 0 ; i < n ; i ++)
		cin >> v[i];
	QuickSort(0 , n - 1);
	for(int i = 0 ; i < n ; i ++)
		cout << v[i] << " ";
	return 0;
}