#include <stdio.h>
#include <math.h>

int main (int argc, char *argv[])
{
    char c[6];
    scanf("%s",c);
    int i;
    int po=0;
    for(i=0;i<6;i++){
        switch (c[i]){
            case 'a':
                po++;
                break;
            case 'i':
                po++;
                break;
            case 'e':
                po++;    
                break;
            case 'o':
                po++;
                break;
            case 'u':
                po++;
                break;
            default:
                break;
        }
    }
    int count=pow(2,po);
    printf("%d",count);
    return 0;
}
