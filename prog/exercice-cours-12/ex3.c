#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	for(int i = 0; i <= argc; i++) {
		while(fscanf(stdin, "%s", argv[i]) != EOF)
		{
			printf("%s", argv[i]);
			fprintf(stderr, "%s", argv[i]);
		}
	}
	exit(0);
		
}
