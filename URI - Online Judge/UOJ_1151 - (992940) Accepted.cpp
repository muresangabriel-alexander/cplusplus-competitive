   #include<iostream>

   using namespace std;
   int main()
   {
     int urm=1, ultim=0;
     int sum=0;
     int N;

     cin>>N;

       while(N!=1){
       std::cout<<ultim <<" ";
       sum=urm+ultim;
       urm=ultim;
       ultim=sum;
     --N;}
       std::cout<<ultim <<'\n';

   return 0;
   }
