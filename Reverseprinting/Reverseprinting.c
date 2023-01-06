#include <stdio.h>

int main (int argc, char *argv[])
{
    int input[1000];
    int count=0;
    int i;
    for(i=0;i<1000;i++){
        scanf("%d",&input[i]);
        if(input[i]==0)
            break;
        count++;
    }
    for(i=count-1;i>=0;i--){
            printf("%d\n",input[i]);
    }
    return 0;
}
