#include<stdio.h>
#include<string.h>

int max(int a,int b){
    return (a>b) ? a : b;
}
int LCS(char *a,char *b,int n,int m){

   if (m == 0 || n == 0)
     return 0;
   if (a[m-1] == b[n-1])
     return 1 + LCS(a, b, m-1, n-1);
   else
     return max(LCS(a, b, m, n-1), LCS(a, b, m-1, n));

}
int len(char *a){
    int i=0;
    while(a[i++]!='\0');
    return i;
}
int main(){
    char a[20],b[10];
    printf("enter string 1");
    gets(a);
    printf("enter string 2");
    gets(b);
    int length,n,m;
    n= len(a);
    m = len(b);
    length=LCS(a,b,n,m);
    printf("LCS %d",length);
    return 0;
}
