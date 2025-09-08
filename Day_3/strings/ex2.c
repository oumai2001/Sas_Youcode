#include <stdio.h>
#include <string.h>
int main()
{
	char ch[100],cpt=0;
	printf("entre votre chaine :");
	scanf("%[^\n]",ch);
	while (ch[cpt] != '\0') {
        cpt++;
    }
   printf("votre chaine est:%s\n",ch);
   printf("la longueur  de votre chaine est:%d",cpt);
}
