#include<stdio.h>
#include<string.h>
int main()
{
	char string[30];
	int i,j;
	gets(string);

	for(i=strlen(string) - 1;i>=0;i--)
	{
		if(string[i]=='.')
		{
			string[i]= '\0';
			printf("%s.",&(string[i]) + 1);
		}
	}
	printf("%s",string);
}
