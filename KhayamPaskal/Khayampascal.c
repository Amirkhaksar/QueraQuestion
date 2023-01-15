#include <stdio.h>

int factorial(int n){
    int f;
    for(f=1;n>1;n--){
        f*=n;
    }
    return f;
}

int khayampascal(int i, int j){
    return (factorial(i)/(factorial(i-j)*factorial(j)));
}

int main (int argc, char *argv[])
{
    int i;
    int j;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ", khayampascal(i,j));
        }
        printf("\n");
    }
    return 0;
}
