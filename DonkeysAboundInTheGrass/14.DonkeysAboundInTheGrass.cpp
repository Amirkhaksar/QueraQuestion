#include<iostream>
using namespace std;

int main(){
  int a,b,l,t=0;
  cin>>a>>b>>l;
  for(int i=0;i<l;i++){
    if(i%2==0)
      t+=a;
    else
      t+=b;
  }
  cout<<t;
  return 0;
}