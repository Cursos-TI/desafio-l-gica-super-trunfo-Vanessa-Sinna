#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1[50];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

     // Declaração das variáveis para a Carta 2
    char estado2[50];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
     // Leitura dos dados da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado: ");
    scanf(" %s", &estado1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", &nomeCidade1);

    printf("Digite a População: ");
    scanf("%d", &populacao1);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

      // Leitura dos dados da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado: ");
    scanf("%s", &estado2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &nomeCidade2);

    printf("Digite a População: ");
    scanf("%d", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Comparação de Cartas
     if (pib1 > pib2) {
         printf("Carta 1 tem maior pib.\n");
         printf ("Por tanto, a cidade vencedora é: %s\n", nomeCidade1);
     } else {
         printf("Carta 2 tem maior pib.\n");
         printf ("Por tanto, a cidade vencedora é: %s\n", nomeCidade2);
     
     }
     
    

    return 0;
}
