#include <stdio.h>

int main (int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int num[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int max=0;
    for(i=1;i<n;i++){
        if(num[i]>num[max]){
            max=i;
        }
    }
    printf("%d\n",num[max]);
    return 0;
}
