int multipli(int a, int b, int c){

	double x=(double)a/c;
  	if(x==(int)x)return b/c-x+1;
  	else return b/c-(int)x;
}