#include <stdio.h>

int main (int argc, char *argv[])
{
    int a,b,l;
    scanf("%d %d %d",&a,&b,&l);
    int sum=0;
    if(l%2==0){
        sum=(((l/2)*a)+((l/2)*b));
    }
    else{
        sum=((((l/2)+1)*a)+((l/2)*b));
    }
    printf("%d\n",sum);
    return 0;
}
