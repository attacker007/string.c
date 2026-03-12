#include<stdio.h>
#include<string.h>
int main(){
    char str[50];int count=1;
    scanf("%s",&str);
    fgets(str,sizeof(str),stdin);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ')
        count++;
    }
    printf("%d",count);
    return 0;
}
