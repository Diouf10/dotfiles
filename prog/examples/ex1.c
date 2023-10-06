#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){

	if(i != 2)
	{
		printf("Le nomvre d'argument n'est pas respecté.  \n");
	}

	const char fichier = argv[1];
	File *f = fopen(fichier,"r");

	if(fichier == NULL)
	{
		printf("Votre fichier n'est pas bon !!!! \n")a;
	}

	int nb_e = 0;
	int nb_E = 0;
	int c;


	while((c = fgetc(fichier)) != EOF) {
		if(c == 'e') ++nb_e;
		if(c == 'E') ++nb_E;
	}

	printf("Nombre de e: %d, \ Nombre de E:%d\n", nb_e, nb_E);
	fclose(f);
	return 0;	
}
