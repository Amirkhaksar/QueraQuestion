/*Language: cpp
ID: 305
QLink: quera.org/problemset/305/
Author: @ellicoder */
#include<iostream>
using namespace std;
long long unsigned int gcd(long long unsigned int a, long long unsigned int b)
{
    if(b==0)
    {
    return a;
    }
    else
    {
    return gcd(b, a % b);

    }
}
int main()
{
   long long unsigned int a,b;
   cin>>a>>b;
   
   cout<<gcd(a,b);
   return 0;
}