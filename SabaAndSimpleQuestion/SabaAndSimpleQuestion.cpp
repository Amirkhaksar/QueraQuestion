#include <iostream>
using namespace std;
int main()
{
	double n;
	int k;
	cin>>n>>k;
	for(int i=0;i<k;i++)
	{
		n=n/2;
	}
	if(n<0&& n!=(int)n)
	{
		n-=1;
	}
	cout<<(int)n;
	return 0;
}
