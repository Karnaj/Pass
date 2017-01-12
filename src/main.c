#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void getpass(char pass[], int len);

void getpass(char pass[], int len)
{
	int c;
	int n = 0;
	do
	{
		c = getch();  
		if(isalnum(c))  /* Si c'est un caractère alphanumérique */
		{
			pass[n] = c; /* on l'ajoute au tableau */
			n++;
		}
	}
	while(c != 0x0D && n < len);    /* jusqu'à entrée ou longueur maximale */
	pass[n] = 0; /* On rajoute le 0 de fin de chaîne */
	printf("\n");  /* On revient à la ligne */
}

int main(void)
{
	char a[11];
	printf("Entrez votre mot de passe (seuls les 10 premiers caracteres seront pris en compte) : ");
	getpass(a, 10);    
	printf("Le mot de passe est %s\n",a);
	return 0;
}
