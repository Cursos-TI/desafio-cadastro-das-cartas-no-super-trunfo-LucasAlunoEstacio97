#include <stdio.h>

int main () {
    char estado, codigoCarta[4], nomeCidade[26];
    int populacao, numeroDePontosTuristicos;
    float area, pib;

    printf("Insira Estado\n");
    scanf(" %c", &estado);

    printf("Insira codigo carta\n");
    scanf(" %3s", codigoCarta);

    getchar();

    printf("Insira nome cidade\n");
    fgets(nomeCidade, 26, stdin);

    printf("Insira populacao \n");
    scanf("%d", &populacao);

    printf("Insira area \n");
    scanf("%f", &area);

    printf("Insira pib \n");
    scanf("%f", &pib);

    printf("Insira numero de pontos turisticos \n");
    scanf("%d", &numeroDePontosTuristicos);

    char estado2, codigoCarta2[4], nomeCidade2[26];
    int populacao2, numeroDePontosTuristicos2;
    float area2, pib2;

    printf("Insira Estado 2\n");
    scanf(" %c", &estado2);

    printf("Insira codigo carta 2\n");
    scanf(" %3s", codigoCarta2);

    getchar();

    printf("Insira nome cidade 2\n");
    fgets(nomeCidade2, 26, stdin);

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
        "Codigo: %s\n"
        "Nome da Cidade: %s"
        "Populacao: %d\n"
        "Area: %.2f km2\n"
        "PIB: %.2f bilhoes de reais\n"
        "Numero de Pontos Turisticos: %d\n\n"
        "Carta 2:\n"
        "Estado: %c\n"
        "Codigo: %s\n"
        "Nome da Cidade: %s"
        "Populacao: %d\n"
        "Area: %.2f km2\n"
        "PIB: %.2f bilhoes de reais\n"
        "Numero de Pontos Turisticos: %d\n",
        estado, codigoCarta, nomeCidade, populacao, area, pib, numeroDePontosTuristicos,
        estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, numeroDePontosTuristicos2
    );
    
    return 0;
}
