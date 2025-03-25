#include <stdio.h>

int main () {
    char estado, codigoCarta[4], *nomeCidade;
    int populacao, numeroDePontosTuristicos;
    float area, pib;

    printf("Insira Estado\n");
    scanf(" %c", &estado);

    printf("Insira codigo carta\n");
    scanf(" %c", &codigoCarta);

    printf("Insira nome cidade\n");
    scanf(" %c", &nomeCidade);

    printf("Insira populacao \n");
    scanf("%d", &populacao);

    printf("Insira area \n");
    scanf("%f", &area);

    printf("Insira pib \n");
    scanf("%f", &pib);

    printf("Insira numero de pontos turisticos \n");
    scanf("%d", &numeroDePontosTuristicos);

    char estado2, codigoCarta2[4], *nomeCidade2;
    int populacao2, numeroDePontosTuristicos2;
    float area2, pib2;

    printf("Insira Estado 2\n");
    scanf(" %c", &estado2);

    printf("Insira codigo carta 2\n");
    scanf(" %c", &codigoCarta2);

    printf("Insira nome cidade 2\n");
    scanf(" %c", &nomeCidade2);

    printf("Insira populacao 2\n");
    scanf("%d", &populacao2);

    printf("Insira area 2\n");
    scanf("%f", &area2);

    printf("Insira pib 2\n");
    scanf("%f", &pib2);

    printf("Insira numero de pontos turisticos 2\n");
    scanf("%d", &numeroDePontosTuristicos2);

    printf(
        "Carta 1:\n"
        "Estado: %c\n"
        "Codigo: %c\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Area: %.2f km2\n"
        "PIB: %.2f bilhoes de reais\n"
        "Numero de Pontos Turisticos: %d\n\n"
        "Carta 2:\n"
        "Estado: %c\n"
        "Codigo: %c\n"
        "Nome da Cidade: %s\n"
        "População: %d\n"
        "Area: %.2f km2\n"
        "PIB: %.2f bilhoes de reais\n"
        "Numero de Pontos Turisticos: %d\n",
        estado, codigoCarta, nomeCidade2, populacao, area, pib, numeroDePontosTuristicos,
        estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, numeroDePontosTuristicos2
    );
    
    return 0;
}
