#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Nível Mestre: Batalha de Cartas, Super Poder e Unsigned Long Int

int main() {
    // Variáveis da Carta 1
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1; // Atualizado para suportar números maiores
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    // Variáveis da Carta 2
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2; // Atualizado para suportar números maiores
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    // ==========================================
    // Área para entrada de dados
    // ==========================================

    printf("--- Cadastro da Carta 1 ---\n");
    
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1); 
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    getchar(); // Limpa o "Enter" do buffer
    
    printf("Digite o Nome da Cidade: ");
    scanf("%[^\n]", nome1); 
    
    printf("Digite a População (numero inteiro): ");
    scanf("%lu", &populacao1); // '%lu' usado para ler unsigned long int
    
    printf("Digite a Área em km2: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB em bilhões de reais (ex: 699.28): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade_populacional1 = (float) populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) / (float) populacao1;
    // Super Poder: Soma de todos os atributos. O (float) garante as conversões corretas.
    // Usamos (1.0 / densidade) para representar o inverso da densidade.
    super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade_populacional1);


    printf("\n--- Cadastro da Carta 2 ---\n");
    
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);
    
    getchar(); // Limpa o "Enter" do buffer novamente
    
    printf("Digite o Nome da Cidade: ");
    scanf("%[^\n]", nome2);
    
    printf("Digite a População (numero inteiro): ");
    scanf("%lu", &populacao2); // '%lu' usado para ler unsigned long int
    
    printf("Digite a Área em km2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB em bilhões de reais (ex: 300.50): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / (float) populacao2;
    // Super Poder da Carta 2
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade_populacional2);


    // ==========================================
    // Área para Exibição e Batalha das Cartas
    // ==========================================

    printf("\n==========================================\n");
    printf("BATALHA DE CARTAS - RESULTADOS!\n");
    printf("==========================================\n\n");

    // Ao invés de usar if/else, aplicamos diretamente os operadores relacionais ( > e < ).
    // Se a condição for verdadeira, o C imprime 1. Se for falsa, imprime 0.
    // Lembrete: Para Densidade Populacional, a carta com o MENOR valor vence!

    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2); // Note o sinal < (menor que)
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    printf("\n==========================================\n");

    return 0;
}