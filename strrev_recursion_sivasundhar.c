#include<stdio.h>

int srev(char *a){
    if(*a == '\0')
        return 0;
    else{
        srev(a+1);
        printf("%c",*a);
    }

}
int main(){
    char arr[20];
    printf("enter a string to reverse");
    gets(arr);
    srev(arr);
    return 0;
}
