#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Main(int argc, char *argv[]) {
	if(argc != 2) {
		printf("Erreur Argument manquant \n");
		return 1;
	}

	char mot[100];
	strcpy(mot, argv[1]);

	char ligne[100];

	fgets(ligne, sizeof(ligne), stdin);

	if(strstr(ligne, mot) != NULL)
	{
		printf("Mot trouvé dans la ligne.\n");
		return 0;
	}
	else
	{
		printf("Le mot n'a pas était trouvé.\n");
		return 1;
	}
}
