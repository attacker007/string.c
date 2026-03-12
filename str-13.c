#include<stdio.h>
#include<string.h>
int main(){
    char str[50],ch;
    int count=0;
    scanf("%s%c",str,&ch);
    
    for(int i=0;i<strlen(str);i++){
        if(str[i]==ch){
            count++;
        }
    }
    if(count>=1)
    printf("%d",count);
    else
    printf("-1");
    return 0;
}
