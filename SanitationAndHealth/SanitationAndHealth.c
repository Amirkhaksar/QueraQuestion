#include <stdio.h>

int main (int argc, char *argv[])
{
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    if(m==0){
        n=20;
    }
    else if(m==7){;}
    else {
        n-=m;
    }
    if (n<0){
        n=0;
    }
    printf("%d\n",n);
    return 0;
}
