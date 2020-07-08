#include<stdio.h>
#include<string.h>
int main(void) {
	char s1[10010];
	char s2[10010];
	scanf("%s",s1);
	scanf("%s",s2);
	int n1=strlen(s1);
	int n2=strlen(s2);
	if(n1>n2)
	{
		printf("%d\n",n1);
	}
	else if(n1<n2)
	{
		printf("%d\n",n2);
	}
	else
	{
		if(strcmp(s1,s2)==0)
		{
			printf("-1\n");
		}
		else
		{
			printf("%d\n",n1);
		}
	}
	return 0;
}
