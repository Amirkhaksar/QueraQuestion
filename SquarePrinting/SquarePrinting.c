#include <stdio.h>

int main (int argc, char *argv[])
{
    int i;
    scanf("%d",&i);
    int j;
    int f;
    for(j=0;j<i;j++){
        if(j==0 || j==i-1){
            for(f=0;f<i;f++){
                printf("*");
            }
            printf("\n");
        }
        else{
            for(f=0;f<i;f++){
                if(f==0||f==i-1){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
