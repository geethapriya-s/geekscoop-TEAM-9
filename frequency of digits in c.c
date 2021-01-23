#include<stdio.h>
int main()
{
	int i,r,frequency[10],temp,n,flag=0,a[100];
	for(i=0;i<10;i++)
	{
		frequency[i]=0;
	}
	printf("Enter the no of elements:\n");
	scanf("%d",&n);
    printf("The elements are:\n");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
		temp=a[i];
		while(temp>0)
		{
			r=temp%10;
			frequency[r]++;
			temp=temp/10;
		}
	}
	for(i=0;i<10;i++)
	{
		if(frequency[i]!=0)
		{
			flag=1;
			printf("\n%d-%d",i,frequency[i]);
		}
	}
	}
