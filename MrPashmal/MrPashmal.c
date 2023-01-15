#include <stdio.h>

int main (void)
{
    int a,b;
    double i;
    scanf("%d %lf %d",&a,&i,&b);
    int money=a*i*b;
    printf("%d\n",money);
    return 0;
}
