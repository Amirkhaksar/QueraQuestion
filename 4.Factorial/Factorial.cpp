#include <iostream>
using namespace std;
int main()
{
    int fact = 1, n, i;
    cin >> n;
    for (i = n; i > 0; i--)
        fact *= i;
    cout << fact;

    return 0;
}