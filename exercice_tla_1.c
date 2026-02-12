#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char special;
    printf("Entrez le caractere special a rechercher : ");
    scanf("%c", &special);
    while (getchar() != '\n');


    FILE *fp = fopen("text", "r");
    if (fp == NULL) {
        fprintf(stderr, "Erreur : impossible d'ouvrir le fichier 'text'.\n");
        return EXIT_FAILURE;
    }

    
    long nb_chars   = 0;
    long nb_lignes  = 0;
    long nb_espaces = 0;
    long nb_mots    = 0;
    long nb_special = 0;

    int c;
    int dans_mot = 0;

    while ((c = fgetc(fp)) != EOF)
    {
        nb_chars++;

        if (c == '\n')
            nb_lignes++;

        
        if (c == ' ')
            nb_espaces++;

        
        if (!isspace(c)) {
            if (!dans_mot) {
                nb_mots++;
                dans_mot = 1;
            }
        } else {
            dans_mot = 0;
        }

        if (c == (int)special)
            nb_special++;
    }

    fclose(fp);

    printf("\n===== Résultats de l'analyse =====\n");
    printf("Nombre de lignes        : %ld\n", nb_lignes);
    printf("Nombre de mots          : %ld\n", nb_mots);
    printf("Nombre de caracteres    : %ld\n", nb_chars);
    printf("Nombre d'espaces        : %ld\n", nb_espaces);
    printf("Occurrences de '%c'      : %ld\n", special, nb_special);
    printf("==================================\n");

    return EXIT_SUCCESS;
}
