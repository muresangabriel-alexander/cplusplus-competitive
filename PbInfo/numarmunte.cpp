#include <iostream>

using namespace std;
int a[20];

int main()
{
    int n, ultim=-1;
    bool condf = true, condi = true;

    cin>>n;

    for(int i=1; i<=n; ++i)
    {
        cin>>a[i];
        ultim = a[i] % 10;
        a[i] = a[i] / 10;
        bool okay = 1;
        bool okappa = false;
        bool inverted = 0;
        while(a[i]>0 && okay)
        {
        	int act = a[i] % 10;
        	if(act == ultim) {
        		okay = false;
        		continue;
        	}
        	if(!inverted)
        		if(act < ultim)
        			inverted = 1;
        		else
        			okappa = true;
        	if(inverted)
        		if(act > ultim)
        			okay = false;
        	ultim = a[i] % 10;
        	a[i] /= 10;
        }
        if(okay == true && inverted && okappa) cout<<1<<'\n';
        else cout<<0 << '\n';
    }
    return 0;
}
