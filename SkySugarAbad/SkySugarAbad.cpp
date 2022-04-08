#include<iostream>
using namespace std;

int main(){
  int n,m,c=0;
  cin>>n>>m;
  char arr[n][m];
  for(int i =0;i<n;i++)
    for(int j=0;j<m;j++){
      cin>>arr[i][j];
      if(arr[i][j]=='*')
        c++;
    }
      
  cout<<c;
  return 0;
}