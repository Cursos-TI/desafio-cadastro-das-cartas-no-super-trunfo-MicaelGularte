#include <stdio.h>

struct Carta{
    char codigo[4];         //Código da carta
    int populacao;          //População
    float area;             //Área
    float pib;              //PIB
    int pontos_turisticos;  //Número de pontos turísticos
    };

    int main() {
        struct Carta carta1, carta2;        

        //Entrada de dados para a carta 1
        printf("Digite o código da carta 1: ");
        scanf("%S", carta1.populacao);

        printf("Digite a população da cidade %s: ", carta1.codigo);
        scanf("%d", &carta1.populacao);

        printf("Digite a área da cidade %s: ", carta1.codigo);
        scanf("%f", &carta1.area);

        printf("Digite o PIB da cidade %s: ", carta1.codigo);
        scanf("%d", &carta1.pontos_turisticos);

        //Entrada de dados para a carta 2
        printf("\nDigite o código da carta 2: ");
        scanf("%s", carta2.codigo);

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
        printf("População: %d\n", carta1.populacao);
        printf("Área: %.2f\n", carta1.area);
        printf("PIB: %.2f\n", carta1.pib);
        printf("Pontos Turisticos: %d\n", carta1.pontos_turisticos);

        printf("\n--- Dados da Carta 2 ---\n");
        printf("Código: %s\n", carta2.codigo);
        printf("População: %d\n", carta2.populacao);
        printf("Área: %.2f\n", carta2.area);
        printf("PIB: %.2f\n", carta2.pib);
        printf("Pontos Turísticos: %d\n", carta2.pontos_turisticos);
        


    return 0;
}
