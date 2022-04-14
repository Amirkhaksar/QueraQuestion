#include <iostream>
using namespace std;
int main()
{
	int n,x,k=0,p=0,i;
    cin>>n;
     for(i=1;n>=i;i++)
     {
     	cin>>x;
     	if(x>p)
		 {
     		p=x;
     		k=i;
		 }
	 }
	 cout<<k;
	 return 0;
}

