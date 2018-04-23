#include "manipulation.h"

void copie(char *Nom1, char *Nom2)
{
	int val;
	unsigned char buffer;
	FILE *fichier1 = NULL;
	FILE *fichier2 = NULL;
	
	fichier1 = fopen(Nom1, "rb");
	if(!fichier1)
		return;
		
	fichier2 = fopen(Nom2, "wb");
	if(!fichier2)
		return;
	
	while(1)
	{
		val = fgetc(fichier1);
		if(val == EOF)
			break;
		buffer = (unsigned char) val;
		fputc(buffer, fichier2);
	
	}
	fclose (fichier1);
	fclose (fichier2);
}


