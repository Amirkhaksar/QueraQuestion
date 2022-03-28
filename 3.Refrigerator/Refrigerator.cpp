#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  if (t > 100)
    cout << "Steam";
  else if (t < 0)
    cout << "Ice";
  else
    cout << "Water";
  return 0;
}