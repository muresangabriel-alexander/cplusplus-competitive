#include <iostream>

using namespace std;

int s;
void sumvec(int n){
int x;
    for(int i=1; i<=n; ++i){
    cin>>x;
    s+=x;
    }

}

int main()
{
    int n;
    cin>>n;

    sumvec(n);
    cout<<s;
    return 0;
}
