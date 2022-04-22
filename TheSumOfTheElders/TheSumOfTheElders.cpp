/*
Language:C++
ID:2551
QLink:https://quera.org/problemset/2551/
Author:pegahghafari
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b;
	string command;
	cin>>a;
	cin>>command;
	cin>>b;
	if(a.length()<b.length()){
		string temp=b;
		b=a;
		a=temp;
	}
	if(command=="+"){
		a[a.length()-b.length()]=a[a.length()-b.length()]+1;
	}
	else if(command=="*")
	{
		for(int i=1;i<b.length();i++){
			a=a+'0';
		}
	}
	cout<<a;
}
