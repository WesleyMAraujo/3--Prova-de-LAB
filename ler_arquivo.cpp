#include <stdio.h>

typedef struct {
    char legenda[100];
    float latitude;
    float longitude;
    int codigo;
    char UF[2];
    char nome_cidade[20];
}cidades_juntas;


/**
 * ler os arquivos de cordenadas e legenda
*/

int ler(){
    char latitude[100];
    cidades_juntas juntar;
    FILE *ler_coordenadas;
    ler_coordenadas = fopen("bancodedados/coordenadas.csv", "r");
    fscanf(ler_coordenadas,"%[^\n]",&juntar.legenda);

    
    
    FILE *legenda_cordenada;
    legenda_cordenada = fopen("bancodedados/legenda-cordenada.txt", "w");
    fprintf(legenda_cordenada,"%s ",juntar.legenda);
    fclose(legenda_cordenada);
    

    return 0;
}