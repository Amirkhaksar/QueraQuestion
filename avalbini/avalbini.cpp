#include<iostream>
using namespace std;

int main(){
  int a,b,f=0,c=0;
    cin>>a>>b;
    for(int i=a+1;i<b;i++){
      for(int j=2;j<i;j++){
        if(i%j==0){
          f=1;
      }
    }
    if(f==0){
      c++;
      if(c>1)
        cout<<",";
      cout<<i;
    }
    f=0;
  }
    return 0;
}