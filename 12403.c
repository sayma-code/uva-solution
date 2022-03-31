#include<stdio.h>
#include <string.h>
int main(){
    int t,i,x,sum=0;
    scanf("%d", &t);
    char str[20];
    for(i=0;i<t;i++){
       scanf("%s", str);
       if(!strcmp(str, "donate")) {
            scanf("%d", &x);
            sum += x;
        } else {
            printf("%d\n", sum);
        }

    }
    return 0;
}
