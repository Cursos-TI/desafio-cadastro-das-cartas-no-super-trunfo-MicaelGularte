#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    char pais[30];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadeDemografica;
    float pibPerCapita;
} Carta;

float superPoder(Carta c) {
    float invDensidade = 1.0f / c.densidadeDemografica;
    return (float)c.populacao + c.area + c.pib + c.pontosTuristicos + invDensidade + c.pibPerCapita;
}

int compararMaior(float v1, float v2) {
    return v1 > v2 ? 1 : 0;
}

int compararMenor(float v1, float v2) {
    return v1 < v2 ? 1 : 0;
}

int main() {
    Carta c1, c2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", c1.pais);
    printf("População: ");
    scanf("%lu", &c1.populacao);
    printf("Área (km²): ");
    scanf("%f", &c1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &c1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &c1.pontosTuristicos);
    printf("Densidade demográfica: ");
    scanf("%f", &c1.densidadeDemografica);
    c1.pibPerCapita = (c1.pib * 1000000000.0) / (float)c1.populacao;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Nome do país: ");
    scanf(" %[^\n]", c2.pais);
    printf("População: ");
    scanf("%lu", &c2.populacao);
    printf("Área (km²): ");
    scanf("%f", &c2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &c2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &c2.pontosTuristicos);
    printf("Densidade demográfica: ");
    scanf("%f", &c2.densidadeDemografica);
    c2.pibPerCapita = (c2.pib * 1000000000.0) / (float)c2.populacao;

    printf("\n=== Comparação de Cartas - Nível Mestre ===\n\n");
    printf("%-25s %-15s %-15s %-10s\n", "Atributo", c1.pais, c2.pais, "Vencedor");
    printf("----------------------------------------------------------------\n");

    printf("%-25s %-15lu %-15lu %-10d\n", "População",
           c1.populacao, c2.populacao,
           compararMaior((float)c1.populacao, (float)c2.populacao));

    printf("%-25s %-15.2f %-15.2f %-10d\n", "Área",
           c1.area, c2.area,
           compararMaior(c1.area, c2.area));

    printf("%-25s %-15.2f %-15.2f %-10d\n", "PIB",
           c1.pib, c2.pib,
           compararMaior(c1.pib, c2.pib));

    printf("%-25s %-15d %-15d %-10d\n", "Pontos Turísticos",
           c1.pontosTuristicos, c2.pontosTuristicos,
           compararMaior((float)c1.pontosTuristicos, (float)c2.pontosTuristicos));

    printf("%-25s %-15.2f %-15.2f %-10d\n", "Densidade Demográfica",
           c1.densidadeDemografica, c2.densidadeDemografica,
           compararMenor(c1.densidadeDemografica, c2.densidadeDemografica));

    printf("%-25s %-15.2f %-15.2f %-10d\n", "PIB per Capita",
           c1.pibPerCapita, c2.pibPerCapita,
           compararMaior(c1.pibPerCapita, c2.pibPerCapita));

    float sp1 = superPoder(c1);
    float sp2 = superPoder(c2);

    printf("\n%-25s %-15.2f %-15.2f %-10d\n", "Super Poder",
           sp1, sp2,
           compararMaior(sp1, sp2));

    return 0;
}
