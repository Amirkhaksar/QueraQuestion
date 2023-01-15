#include <stdio.h>

int main (int argc, char *argv[])
{
    int n;
    scanf("%d",&n);
    int c[n];
    int i;
    int j;
    int sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&c[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j && c[i]==c[j] && c[i]!=0 && c[j]!=0){
                c[i]=c[j]=0;
            }
        }
    }
    for(i=0;i<n;i++){
        if(c[i]!=0){
            sum=(sum^c[i]);
        }
    }
    printf("%d\n", sum);
    return 0;
}
