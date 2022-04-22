/*Language: cpp
ID: 8938
QLink: quera.org/problemset/8938/
Author: @ellicoder */
#include<iostream>
using namespace std;
int main()
{
   int n,m,xk,yk,sum=0;
   cin>>n>>m;
   int arr[n][n];
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
       cin>>arr[i][j];
     }
   }
   for(int i=0;i<m;i++){
     cin>>xk>>yk;
     sum+=arr[xk-1][yk-1];
   }
   cout<<sum;
   return 0;
}