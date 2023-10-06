#include <stdio.h>
#include <stdlib.h>

void validation_flux_fichier(FILE *p) {
	// Erreur fopen return 0
	// !0 == true
	// !!0 == !(true) == false
	if(!p){
		printf(" Erreur avec le fichier \n");
		exit(1);
	}
}

int main(int argc, char *argv[]) {
	if(argc != 3) {
		return 1;
	}

	char *fichier_r =  argv[1];
	int decalage = atoi(argv[2]);

	if(decalage < 1 || decalge > 10) {
		printf("Nombre entre 1 et 10, %d", decalage);
		return 1;
	}

	FILE *fLecture = fopen(fichier_r, "r");
	validation_flux_fichier(fLecture);

	FILE *fResultat = fopen("Resultat.txt", "w+");
	validation_flux_fichier(fResultat);

	char ch;
	while((ch == fgetc(fLecture)) != EOF) {
		dputc(ch + decalage, fResultat);
	}

	fclose(fLecture);
	fclose(fResultat);

	return 0;

}
