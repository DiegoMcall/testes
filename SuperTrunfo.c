#include <stdio.h>
#include <string.h>

int main() {
    // Primeira carta
    char estado_1[5], codigo_1[5], nome_cidade_1[50];
    int populacao_1, pontos_turisticos_1;
    float area_1, PIB_1, densidade_1, PIB_per_capita_1;

    printf("Cadastro da Carta 1:\n");

    printf("Digite o estado (A a H): ");
    scanf("%s", estado_1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade: ");
    getchar(); // limpar o \n deixado pelo scanf anterior
    fgets(nome_cidade_1, 50, stdin);
    nome_cidade_1[strcspn(nome_cidade_1, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &populacao_1);
    getchar(); // limpar o \n

    printf("Digite a área do município: ");
    scanf("%f", &area_1);
    getchar(); // limpar o \n

    printf("Digite o PIB do município: ");
    scanf("%f", &PIB_1);
    getchar(); // limpar o \n

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_1);
    getchar(); // limpar o \n

    // Cálculos
    densidade_1 = (float)populacao_1 / area_1;
    PIB_per_capita_1 = PIB_1 / populacao_1;

    // Saída carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Cidade: %s\n", nome_cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f\n", PIB_1);
    printf("Pontos turísticos: %d\n", pontos_turisticos_1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_1);
    printf("PIB per capita: %.2f\n", PIB_per_capita_1);

    printf("\n-----------------------------\n");

    // Segunda carta
    char estado_2[5], codigo_2[5], nome_cidade_2[50];
    int populacao_2, pontos_turisticos_2;
    float area_2, PIB_2, densidade_2, PIB_per_capita_2;

    printf("Cadastro da Carta 2:\n");

    printf("Digite o estado (A a H): ");
    scanf("%s", estado_2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: ");
    getchar(); // limpar o \n deixado pelo scanf anterior
    fgets(nome_cidade_2, 50, stdin);
    nome_cidade_2[strcspn(nome_cidade_2, "\n")] = '\0';

    printf("Digite a população: ");
    scanf("%d", &populacao_2);
    getchar(); // limpar o \n

    printf("Digite a área do município: ");
    scanf("%f", &area_2);
    getchar(); // limpar o \n

    printf("Digite o PIB do município: ");
    scanf("%f", &PIB_2);
    getchar(); // limpar o \n

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);
    getchar(); // limpar o \n

    // Cálculos
    densidade_2 = (float)populacao_2 / area_2;
    PIB_per_capita_2 = PIB_2 / populacao_2;

    // Saída carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Cidade: %s\n", nome_cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f\n", PIB_2);
    printf("Pontos turísticos: %d\n", pontos_turisticos_2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per capita: %.2f\n", PIB_per_capita_2);

    return 0;
}