#include<stdio.h>
#include<malloc.h>
int main()
{
	int n,i,j,ind1,ind2,sum=0,x,flag=0;
	scanf("%d",&n);
	int arr[n];
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to check sum:");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		sum = arr[i];
		for(j=i+1;j<=n;j++)
		{
			sum+=arr[j];
			if(sum==x)
			{
				flag=1;
				ind1 = i;
				ind2 = j;
				break;
			}
		}
	}
	if(flag==1)
		printf("%d %d",ind1,ind2);
	else
		printf("-1");
	
}
