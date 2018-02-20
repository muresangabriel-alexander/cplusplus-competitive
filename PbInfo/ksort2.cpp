#include <iostream>
#include <algorithm>
using namespace std;
int v[200005];

void QuickSort(int st, int dr)
{
	if(st < dr)
	{
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

int main()
{
    int n  , k;
    cin>>n>>k;
    for(int i=0; i<n; ++i)cin>>v[i];

    QuickSort(0,k-1);
    QuickSort(k,n-1);

    for(int i=0; i<k; ++i)cout<<v[i]<<' ';
    for(int i=n-1; i>=k; --i)cout<<v[i]<<' ';
    return 0;
}
