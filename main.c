#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definisci le costanti
#define N 3
#define MAX_STRLEN 30

// Definisci il tipo di dato struct s_studente
struct s_studente  {
	char nome[MAX_STRLEN+1];
	char cognome[MAX_STRLEN+1];
	unsigned int eta;
	char classe[MAX_STRLEN+1];
};
// Definisci studente come struct s_studente
typedef struct s_studente studente;

int main(int argc, char** argv) {
    FILE *puntafile;
    studente alunno;
    int i;
    puntafile=fopen("elenco.dat", "w");
    
    for (i=0;i<N;i++){
        printf("Studente %d:\n", i+1);
        printf("Nome: ");
	scanf("%s", alunno.nome);
	printf("Cognome: ");
        scanf("%s", alunno.cognome);
	printf("Eta': ");
        scanf("%d", &alunno.eta);
	printf("Classe: ");
	scanf("%s", alunno.classe);
        fprintf(puntafile,"%s; %s; %d; %s", alunno.nome, alunno.cognome, alunno.eta, alunno.classe);
    }
    fclose(puntafile);
    return (EXIT_SUCCESS);
}