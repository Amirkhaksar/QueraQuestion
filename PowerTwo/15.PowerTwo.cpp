#include<iostream>
using namespace std;

int main(){
  long long int n;
  int c=1;
  cin>>n;
  while(n>0){
    n/=2;
    c*=2;
  }
  cout<<c;
  return 0;
}