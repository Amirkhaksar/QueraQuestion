#include <stdio.h>
/* answer to https://quera.org/problemset/146465/ */
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
