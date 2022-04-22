/*Language: cpp
ID: 2534
QLink: quera.org/problemset/2534/
Author: @ellicoder */
#include<iostream>
using namespace std;
int main()
{
   int n,sum=0,c=0;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
     cin>>arr[i];
     sum+=arr[i];
   }
   int avg = sum/n;
   for(int i=0;i<n;i++){
     if(arr[i]>avg)
       c+=arr[i]-avg;
       
   }
   cout<<c;
   return 0;
}