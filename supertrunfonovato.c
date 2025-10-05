#include <stdio.h>

typedef struct {
    char codigo[4]; 
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
} Carta;

int main() {
    Carta c1, c2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Código da carta (ex: A01): ");
    scanf("%s", c1.codigo);
    printf("População: ");
    scanf("%d", &c1.populacao);
    printf("Área (km²): ");
    scanf("%f", &c1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &c1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &c1.pontosTuristicos);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Código da carta (ex: B02): ");
    scanf("%s", c2.codigo);
    printf("População: ");
    scanf("%d", &c2.populacao);
    printf("Área (km²): ");
    scanf("%f", &c2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &c2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &c2.pontosTuristicos);

    printf("\n=== Dados da Carta 1 ===\n");
    printf("Código: %s\n", c1.codigo);
    printf("População: %d\n", c1.populacao);
    printf("Área: %.2f km²\n", c1.area);
    printf("PIB: %.2f bilhões\n", c1.pib);
    printf("Pontos turísticos: %d\n", c1.pontosTuristicos);

    printf("\n=== Dados da Carta 2 ===\n");
    printf("Código: %s\n", c2.codigo);
    printf("População: %d\n", c2.populacao);
    printf("Área: %.2f km²\n", c2.area);
    printf("PIB: %.2f bilhões\n", c2.pib);
    printf("Pontos turísticos: %d\n", c2.pontosTuristicos);

    return 0;
}
