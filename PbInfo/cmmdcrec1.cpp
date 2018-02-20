int cmmdc(int x, int y, int &r)
{ if(x%y==0)  r=y;
  else return cmmdc(y,x%y,r);
}