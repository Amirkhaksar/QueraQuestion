#include <stdio.h>

int main (int argc, char *argv[])
{
    char c[20];
    int i;
    int j;
    scanf("%s",c);
    for(i=0;c[i]!='\0';i++){
        for(j=i-1;j>=0;j--){
            c[j]=c[i];
        }
        printf("%s\n",c);
    }
    return 0;
}
