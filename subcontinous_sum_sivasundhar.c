#include<stdio.h>
int main()
{
    int a[]={5,6,8,20,15},sum = 0,total = 0,i,j;
    x:printf("enter the sum value\n");
    scanf("%d",&sum);
    for(i=0;i<sizeof(a)/sizeof(a[0]);i++)
    {
        for( j=i;j<sizeof(a)/sizeof(a[0]);j++)
        {
            if(total == sum)
                break;
            else
                total += a[j];
        }
        if(total==sum)
        {
            printf("subarray %d,%d",i,j-1);
            break;
        }
        else
            total=0;

    }
    if(total == 0)
    {
        printf("---enter the correct sum value---\n");
        goto x;
    }


    return 0;
}
