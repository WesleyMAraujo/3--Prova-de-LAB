#include <stdio.h>

typedef struct {
    char latitude[6];
    char longitude[6];
    char codigo[6];
    char UF[2];
    char nome_cidade[20];
}cidades_juntas;

/**
 * ler os arquivos de cordenadas e legenda
*/
int ler(){
    FILE *legenda_cordenada;
    legenda_cordenada = fopen("bancoDeDados/legenda-cordenada.txt", "w");
    
    FILE *ler_coordenadas;
    ler_coordenadas = fopen("bancoDeDados/coordenadas.csv", "r");
    
    
    fprintf(legenda_cordenada,"aaaaaaaa");
    fclose(legenda_cordenada);
    

    return 0;
}