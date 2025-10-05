#include <stdio.h>

struct Carta {
    char estado;
    int codigo;
    char nomeCidade[50];
    float populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta1.estado);

    printf("Código da cidade (1-4): ");
    scanf("%d", &carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%f", &carta1.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = (carta1.pib * 1000000000.0f) / carta1.populacao;


    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &carta2.estado);

    printf("Código da cidade (1-4): ");
    scanf("%d", &carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%f", &carta2.populacao);

    printf("Área (km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = (carta2.pib * 1000000000.0f) / carta2.populacao;

    // Exibição
    printf("\n===== CARTA 1 =====\n");
    printf("Código: %c%02d\n", carta1.estado, carta1.codigo);
    printf("Cidade: %s\n", carta1.nomeCidade);
    printf("População: %.0f\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões\n", carta1.pib);
    printf("Pontos turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f R$/hab\n", carta1.pibPerCapita);

    printf("\n===== CARTA 2 =====\n");
    printf("Código: %c%02d\n", carta2.estado, carta2.codigo);
    printf("Cidade: %s\n", carta2.nomeCidade);
    printf("População: %.0f\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões\n", carta2.pib);
    printf("Pontos turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f R$/hab\n", carta2.pibPerCapita);

    return 0;
}
