#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int result=0;
	string s1;
	string s2;
	cin>>s1>>s2;
	for(int i=0;i<n;i++){
	if(s1.at(i) != s2.at(i))
	{
		result++ ;
	}
	}
    cout<<result;
     	return 0;
}
	

