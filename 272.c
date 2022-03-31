#include<stdio.h>
int main(){
    char c;
    int count = 0;
    while(scanf("%c",&c) == 1){
        if(ch == '"'){
            count++;
            if(count%2)printf("``");
            else printf("''");
        }
        else printf("%c",c);
    }
    return 0;
}
