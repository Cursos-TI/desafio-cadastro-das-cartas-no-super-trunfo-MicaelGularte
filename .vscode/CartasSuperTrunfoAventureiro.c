#include <stdio.h>
#include <string.h>


struct Carta {
    char codigo[6]; 
    char estado[50];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
};


void calcularDensidade(struct Carta *carta) {
    if (carta->area > 0)
        carta->densidadeDemografica = carta->populacao / carta->area;
    else
        carta->densidadeDemografica = 0;
}


void limparBuffer() {
    while (getchar() != '\n');
}


void preencherCarta(struct Carta *carta, int numero) {
    printf("\n=== Preenchendo dados da Carta %d ===\n", numero);

    printf("Código da carta (ex: SP01): ");
    scanf("%s", carta->codigo);  

    limparBuffer();

    printf("Estado (ou região): ");
    fgets(carta->estado, sizeof(carta->estado), stdin);
    carta->estado[strcspn(carta->estado, "\n")] = '\0';

    printf("Nome do país: ");
    fgets(carta->nome, sizeof(carta->nome), stdin);
    carta->nome[strcspn(carta->nome, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &carta->populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta->area);

    printf("PIB (em bilhões): ");
    scanf("%f", &carta->pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta->pontosTuristicos);

    calcularDensidade(carta);
}


void compararCartas(struct Carta c1, struct Carta c2, int opcao) {
    printf("\nComparando cartas:\n");
    printf("Carta 1 - Código: %s | País: %s\n", c1.codigo, c1.nome);
    printf("Carta 2 - Código: %s | País: %s\n", c2.codigo, c2.nome);

    switch (opcao) {
        case 1:
            printf("\nPopulação:\n%s: %d\n%s: %d\n",
                   c1.nome, c1.populacao,
                   c2.nome, c2.populacao);
            if (c1.populacao > c2.populacao)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.populacao > c1.populacao)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nÁrea:\n%s: %.2f km²\n%s: %.2f km²\n",
                   c1.nome, c1.area,
                   c2.nome, c2.area);
            if (c1.area > c2.area)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.area > c1.area)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nPIB:\n%s: %.2f bilhões\n%s: %.2f bilhões\n",
                   c1.nome, c1.pib,
                   c2.nome, c2.pib);
            if (c1.pib > c2.pib)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pib > c1.pib)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nPontos turísticos:\n%s: %d\n%s: %d\n",
                   c1.nome, c1.pontosTuristicos,
                   c2.nome, c2.pontosTuristicos);
            if (c1.pontosTuristicos > c2.pontosTuristicos)
                printf("Vencedor: %s\n", c1.nome);
            else if (c2.pontosTuristicos > c1.pontosTuristicos)
                printf("Vencedor: %s\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("\nDensidade demográfica:\n%s: %.2f hab/km²\n%s: %.2f hab/km²\n",
                   c1.nome, c1.densidadeDemografica,
                   c2.nome, c2.densidadeDemografica);
            if (c1.densidadeDemografica < c2.densidadeDemografica)
                printf("Vencedor: %s (menor densidade vence)\n", c1.nome);
            else if (c2.densidadeDemografica < c1.densidadeDemografica)
                printf("Vencedor: %s (menor densidade vence)\n", c2.nome);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }
}

int main() {
    struct Carta pais1, pais2;
    int opcao;

    printf("=== Super Trunfo de Países ===\n");

    preencherCarta(&pais1, 1);
    preencherCarta(&pais2, 2);

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);

    compararCartas(pais1, pais2, opcao);

    return 0;
}
