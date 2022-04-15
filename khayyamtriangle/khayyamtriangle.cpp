#include<iostream>
using namespace std;
long int fact(int);

int main()
{
   int i, n, j;
   cin>>n;
   for (i = 0; i < n; i++){
      for (j = 0; j <= i; j++)
         printf("%ld ",fact(i)/(fact(j)*fact(i - j)));
    cout<<endl;
   }

   return 0;
}

long fact(int n)
{
  if( n==1 || n==0){
    return 1;
  }else{
    return (n * fact(n-1));
  }
}