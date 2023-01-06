#include <stdio.h>

int main (int argc, char *argv[])
{
    int n;
    int k;
    scanf("%d %d",&n,&k);
    if(n%k==0){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}
