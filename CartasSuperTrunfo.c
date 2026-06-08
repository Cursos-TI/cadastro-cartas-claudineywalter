#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Aventureiro: Adição de Densidade Populacional e PIB per Capita
// Correção: Uso de getchar() para limpar o buffer do teclado.

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    // ==========================================
    // Área para entrada de dados
    // ==========================================

    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1); 
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    // Limpa o "Enter" do buffer para não pular a leitura do nome da cidade
    getchar(); 
    
    printf("Digite o Nome da Cidade: ");
    scanf("%[^\n]", nome1); 
    
    printf("Digite a População (numero inteiro): ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área em km2: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB em bilhões de reais (ex: 699.28): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / (float) populacao1;


    printf("\n--- Cadastro da Carta 2 ---\n");
    
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    // Limpa o "Enter" do buffer novamente
    getchar(); 
    
    printf("Digite o Nome da Cidade: ");
    scanf("%[^\n]", nome2);
    
    printf("Digite a População (numero inteiro): ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área em km2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB em bilhões de reais (ex: 300.50): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / (float) populacao2;

    // ==========================================
    // Área para exibição dos dados da cidade
    // ==========================================

    printf("\n==========================================\n");
    printf("DADOS CADASTRADOS E CALCULADOS COM SUCESSO!\n");
    printf("==========================================\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n"); // Linha em branco para separar as cartas

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    
    printf("\n==========================================\n");

    return 0;
}
