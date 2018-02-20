void sterge(int a[], int &n, int i, int j){
    int x=i, y=j+1;

    while ( y<=n){
    a[x]=a[y];
    ++x;
    ++y;
    }

    n=n-(j-i+1);
}