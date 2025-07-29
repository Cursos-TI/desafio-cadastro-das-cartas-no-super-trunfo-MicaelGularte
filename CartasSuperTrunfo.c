#include <stdio.h>

struct Carta {
    char codigo[4];
    char estado[20];
    char nome_da_cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};
    int main() {
        struct Carta carta1, carta2;        

        //Entrada das caracteristicas para a carta 1
        printf("Digite o código da carta 1: ");
        scanf("%s", carta1.codigo);

        printf("Digite o Estado: ");
        scanf(" %19[^\n]", &carta1.estado);

        printf("Digite o Nome da Cidade: ");
        scanf(" %19[^\n]", &carta1.nome_da_cidade);

        printf("Digite a população da cidade %s: ", carta1.codigo);
        scanf("%d", &carta1.populacao);

        printf("Digite a área da cidade %s: ", carta1.codigo);
        scanf("%f", &carta1.area);

        printf("Digite o PIB da cidade %s: ", carta1.codigo);
        scanf("%f", &carta1.pib);

        printf("Digite o numero de pontos turisticos da cidade %s: ", carta1.codigo);
        scanf("%d", &carta1.pontos_turisticos);

        //Entrada das caracteristicas para a carta 2
        printf("\nDigite o código da carta 2: ");
        scanf("%s", carta2.codigo);

        printf("Digite o Estado: ", carta2.estado);
        scanf(" %19[^\n]", &carta2.estado);

        printf("Digite o Nome da Cidade: ", carta2.nome_da_cidade);
        scanf(" %19[^\n]", &carta2.nome_da_cidade);

        printf("Digite a população da cidade %s: ", carta2.codigo);
        scanf("%d", &carta2.populacao);

        printf("Digite a área da cidade %s: ", carta2.codigo);
        scanf("%f", &carta2.area);

        printf("Digite o PIB da cidade %s: ", carta2.codigo);
        scanf("%f", &carta2.pib);

        printf("Digite o numero de pontos turisticos da cidade %s: ", carta2.codigo);
        scanf("%d", &carta2.pontos_turisticos);

        //Exibição das caracteristicas das cartas
        printf("\n--- Dados da Carta 1 ---\n");
        printf("Código: %s\n", carta1.codigo);
        printf("Estado: %c\n", carta1.estado);
        printf("Cidade: %s\n", carta1.nome_da_cidade);
        printf("População: %d\n", carta1.populacao);
        printf("Área: %.2f\n", carta1.area);
        printf("PIB: %.2f\n", carta1.pib);
        printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

        printf("\n--- Dados da Carta 2 ---\n");
        printf("Código: %s\n", carta2.codigo);
        printf("Estado: %c\n", carta2.estado);
        printf("Cidade: %s\n", carta2.nome_da_cidade);
        printf("População: %d\n", carta2.populacao);
        printf("Área: %.2f\n", carta2.area);
        printf("PIB: %.2f\n", carta2.pib);
        printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
        


    return 0;
}
