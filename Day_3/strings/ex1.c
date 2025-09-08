#include <stdio.h>
#include <string.h>
int main()
{
	char ch[100];
	printf("entre votre chaine :");
	scanf("%[^\n]",ch);
	printf("votre chaine est:%s",ch);
}