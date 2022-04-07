#include <iostream>
using namespace  std;
int main()
{
  int n, x, y;
  cin >> n >> x >> y;
  for (int counter = 0 ; counter * x <= n; counter ++)
  {
    if((n - counter * x) % y == 0)
    {
      cout << counter  << " " << (n - counter * x) / y;
      return 0;
    }
    
  }
  cout << "-1";
  return 0;
}