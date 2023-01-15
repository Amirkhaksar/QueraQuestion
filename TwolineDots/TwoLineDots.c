#include <stdio.h>

int main (int argc, char *argv[])
{
    int y1,y2,x1,x2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x1==x2){
        printf("Vertical\n");
    }
    else if(y1==y2){
        printf("Horizontal\n");
    }
    else{
        printf("Try again\n");
    }
    return 0;
}
