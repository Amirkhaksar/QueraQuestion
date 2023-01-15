#include <stdio.h>

int main (int argc, char *argv[])
{
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    if(n==m){
        printf("%d = %d\n",n,m);
        return 0;
    }   
    int i=((((n % 100) % 10)*100)+((n % 100)-((n % 100) % 10))+((n-(n % 100))/100));
    int j=((((m % 100) % 10)*100)+((m % 100)-((m % 100) % 10))+((m-(m % 100))/100));
    if(i > j){
        printf("%d < %d\n",m,n);
    }
    else{
        printf("%d < %d\n",n,m);
    }
    return 0;
}
