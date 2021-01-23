
#include <stdio.h>

void stringreverse(char str[],char deli)
{
    int i;
    for(i=0;str[i]!='\0';i++);
	int len = i;

	for(i=len-1;i>=0;i--) {
		if (str[i] == deli) {

			str[i] = '\0';
			printf("%s%c",&(str[i]) + 1,deli);
		}
	}
	printf("%s", str);
}

int main()
{
	char str[] = "hello.world.this.is.c";
	char deli = '.';
	stringreverse(str,deli);
	return 0;
}
