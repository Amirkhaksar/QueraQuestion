#include <stdio.h>
/* solution to https://quera.org/problemset/104588/ */
int main (int argc, char *argv[])
{
    int c[5];
    int i;
    int count=0;
    for(i=0;i<5;i++){
        scanf("%d",&c[i]);
    }
    for(int i=0;i<5;i++){
        if(c[i]>=80){
            count++;
        }
    }
    if(count>=3){
        printf("Mamma mia!\n");
    }
    else if(count>=1){
        printf("Mamma mia!!\n");
    }
    else { 
        printf("Mamma mia!!!\n");
    }
    return 0;
}
