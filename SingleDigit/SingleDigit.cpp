#include <iostream>
void single(long int x){
int sum=0;
	while(x>0 || sum>9){
		if(x==0){
			x=sum;
			sum=0;
		}
		sum += x%10;
		x /= 10;
	}
std::cout<<sum;
}

int main(){
long int n;
std::cin>>n;
single(n);
return 0;
}
