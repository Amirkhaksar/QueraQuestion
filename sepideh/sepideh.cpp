/*Language: cpp
ID: 31020
QLink: quera.org/problemset/31020/
Author: @ellicoder */
#include<iostream>
using namespace std;
int main()
{
   int n,m;
   cin>>n>>m;
   if(n%m==0){
     cout<<n/m;
   }else{
     cout<<n/m+1;
   }
   return 0;
}