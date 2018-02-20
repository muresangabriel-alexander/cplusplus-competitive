#include <iostream>
using namespace std;

int n , v[100005], tmp[100005];

void MergeSort(int st, int dr)
{
	if(st < dr)
	{
		int m = (st + dr) / 2;
		MergeSort(st , m);
		MergeSort(m + 1 , dr);
		//Interclasare
		int i = st, j = m + 1, k = 0;
		while( i <= m && j <= dr )
			if( v[i] < v[j])
				tmp[++k] = v[i++];
			else
				tmp[++k] = v[j++];
		while(i <= m)
			tmp[++k] = v[i++];
		while(j <= dr)
			tmp[++k] = v[j++];
		for(i = st , j = 1 ; i <= dr ; i ++ , j ++)
			v[i] = tmp[j];
	}
}

int main(){
	cin >> n;
	for(int i = 0 ; i < n ; i ++)
		cin >> v[i];
	MergeSort(0 , n - 1);
	for(int i = 0 ; i < n ; i ++)
		cout << v[i] << " ";
	return 0;
}