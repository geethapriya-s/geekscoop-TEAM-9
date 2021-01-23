#include<stdio.h>
int i,j=0;
void frequency(char *s,int n)
{
    int k;
    for(i=0;i<n;i++)
    {
        k=1;
        if(s[i]){
            for(j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    k++;
                    s[j]='\0';
                }
            }
            printf("%c -> %d\n",s[i],k);
        }
    }

}
int main()
{
    char a[] = "hello world";
    for(i=0;a[i]!='\0';i++);
    frequency(a,i);
}
