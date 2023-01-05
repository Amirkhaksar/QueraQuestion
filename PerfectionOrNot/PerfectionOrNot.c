#include <stdio.h>

int div[42];
int last=0;
void finddivisors(int n){
    int i;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            div[last++]=i;
        }
    }
}

int main(){
    int sum=0;
    int num;
    scanf("%d",&num);
    finddivisors(num);
    int i;
    for(i=0;i<last;i++){
        sum += div[i];
    }
    if(sum==num){
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
}
