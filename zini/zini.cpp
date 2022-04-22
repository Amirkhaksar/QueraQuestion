/*Language: cpp
ID: 33023
QLink: quera.org/problemset/33023/
Author: @ellicoder */
#include <iostream>
using namespace std;
int main()
{
  int m,n,c=0;
  cin>>n>>m;
  long long int arr[n][m];
  for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
      cin>>arr[i][j];
  for(int i=1;i<n-1;i++)
    for(int j=1;j<m-1;j++)
      if((arr[i][j]>arr[i][j+1] && arr[i][j]>arr[i][j-1] && arr[i][j]<arr[i-1][j] && arr[i][j]<arr[i+1][j])||
        (arr[i][j]<arr[i][j+1] && arr[i][j]<arr[i][j-1] && arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i+1][j]))
        c++;
  
  cout <<c ;
  
  return 0;
}