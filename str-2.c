#include<stdio.h>
#include<string.h>
int main(){
    char str[20];
    int count=0;
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='A' && str[i]<='Z'){
            count++;
        }
    }
    if(count==0){
        printf("invaild");
    }
    else{
        printf("vaild");
    }
    return 0;
}
