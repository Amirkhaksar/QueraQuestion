#include <stdio.h>

int main (int argc, char *argv[])
{
    int a1,b1,a2,b2;
    int a3,b3,a4,b4;
    scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
    scanf("%d %d %d %d",&a3,&b3,&a4,&b4);
    if((a1+b1+a2+b2)>(a3+b3+a4+b4)){
        printf("Gunnar\n");
    }
    else if((a1+b1+a2+b2)<(a3+b3+a4+b4)){
        printf("Emma\n");
    }
    else {
        printf("Tie\n");
    }
    return 0;
}
