#include <stdio.h>
#define radif 10
#define chairs 20

int main (int argc, char *argv[])
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    if(m<=10){
        printf("Right ");
        i=m;
    }
    else{
        printf("Left ");
        i=(chairs-m)+1;
    }
    printf("%d %d\n",(radif-n)+1,i);
    return 0;
}
