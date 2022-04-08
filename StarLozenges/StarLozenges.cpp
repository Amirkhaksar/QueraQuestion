#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    int space,star,space2,star2;
    cin>>n;
    space = n/2;
    space2 = n-1;
    for (i = 1; i <= n/2+1; i++)
    {
        for (j = 1; j <= space; j++)
          cout<<" ";
        space--;
        
        for (j = 1; j <= 2*i-1; j++)
             cout<<"*";
             
        for (j = 1; j <= space2; j++)
          cout<<" ";
        space2-=2;
        
        for (j = 1; j <= 2*i-1; j++)
             cout<<"*";
        
        cout<<endl;  
    }
    space = 1;
    star=n-2;
    space2=2;
    star2=n-2;
    for (i = 1; i <= n/2; i++)
    {
      for (j = 1; j <= space; j++)
          cout<<" ";    
        space++;
        
        for (j = 1 ; j <= star; j++)
            cout<<"*";
        star-=2;
        
        for (j = 1; j <= space2; j++)
          cout<<" ";    
        space2+=2;
        
        for (j = 1 ; j <= star2; j++)
            cout<<"*";
        star2-=2;
        
        cout<<endl; 
    }
    return 0;
}