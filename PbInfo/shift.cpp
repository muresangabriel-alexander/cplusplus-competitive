void shift(int x[], int n){

int primu = x[0];
for(int i=1; i<n; ++i)x[i-1]=x[i];
x[n-1]=primu;
//for(int i=0; i<n; ++i)cout<<x[i]<<' ';

}