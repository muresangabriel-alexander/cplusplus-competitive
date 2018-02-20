#include<iostream>
using namespace std;
int n, ns;

void afis(int incipit, int lung){
for(int i=incipit; i<=incipit+lung-1; ++i)cout<<i<<' ';
cout<<'\n';
}

int main()
{
  cin>>n;
  int k=2;
  int extraK=1;

  while((n-extraK)/k)
  {
    if((n-extraK)%k==0)afis((n-extraK)/k, k);
    extraK+=k;
    ++k;

  }
  return 0;
}
