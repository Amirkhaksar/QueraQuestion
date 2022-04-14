#include<iostream>
using namespace std;

int main()
{
   int n,k,c=0;
   cin>>n>>k;
   int arr[n];
   for (int i = 1; i <= n; ){
    i+=k;
      if(i>n){
        i=i%n;
    }
    c++;
    if(i==1)
    break;
   }
   cout<<c;
   return 0;
}