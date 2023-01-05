#include <stdio.h>

int main (int argc, char *argv[])
{
    int n;
    int i;
    char s[100];
    scanf("%d %s",&n,s);
    for (i = 0; i < n; i++) {
        printf("copy of ");
    }
    printf("%s\n",s);
    return 0;
}
