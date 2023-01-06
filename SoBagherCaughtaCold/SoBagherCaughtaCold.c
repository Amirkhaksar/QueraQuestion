#include <stdio.h>
#include <string.h>
struct String {
    char c[20];
};
int main (int argc, char *argv[])
{
    struct String c[5];
    int found[5]={0,0,0,0,0};
    int j=0;
    for(int i=0; i<5;i++)
        scanf("%s",c[i].c);
    int count=0;
    const char* m="MOLANA";
    const char* h="HAFEZ";
    for(int i=0;i<5;i++){
        if(strstr(c[i].c,m) || strstr(c[i].c,h)){
            found[j++]=i+1;
            count++;
        }
    }
    if(count==0){
        printf("NOT FOUND!\n");
    }
    for(int i=0;i<5;i++){
        if(found[i]!=0){
            printf("%d ",found[i]);
        }
    }
    return 0;
}
