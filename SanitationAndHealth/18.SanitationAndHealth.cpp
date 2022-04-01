#include<iostream>
using namespace std;
int main()
{
	int X,N,Result;
	cin>>X>>N;
	if(N==0)
	cout<<20;
	else if(N==7)
	cout<<X;
	else
{
	Result=(X-N)<0 ? 0:(X-N);
	cout<<Result;
}
	
	return 0;
}


