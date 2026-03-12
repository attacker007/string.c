#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int count=0;
    scanf("%s",&str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='0' && str[i]<='9'){
            count++;
            
        }
    }
    printf("%d",count);
    return 0;
}
