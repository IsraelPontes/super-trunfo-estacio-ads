#include <stdio.h>
#include <stdlib.h>

int main() {
    //Cadastro de Carta 01
    char estado_001;
    char codigo_carta_001[4];
    char capital_001[50];
    int populacao_001;
    float pib_001;
    float area_001;
    int numero_pontos_turisticos_001;
    float densidade_populacional_001;
    float pib_per_capita_001;

    //Cadastro de Carta 02
    char estado_002;
    char codigo_carta_002[4];
    char capital_002[50];
    int populacao_002;
    float pib_002;
    float area_002;
    int numero_pontos_turisticos_002;
    float densidade_populacional_002;
    float pib_per_capita_002;
    
    // Leitura dos dados da carta 01
    printf("==============================\n");
    printf("Cadastro da Carta 01\n");
    printf("==============================\n");

    printf("Digite a primeira letra do o estado (A-H): ");
    scanf(" %c", &estado_001); // O espaço antes de %c é para consumir qualquer caractere de nova linha deixado no buffer

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo_carta_001);

    printf("Digite o nome da capital: ");
    scanf(" %[^\n]", capital_001); // Permite ler o nome da capital com espaços

    printf("Digite a população da capital: ");
    scanf("%d", &populacao_001);

    printf("Digite o PIB da capital: ");
    scanf("%f", &pib_001);

    printf("Digite a área da capital: ");
    scanf("%f", &area_001);

    printf("Digite os pontos turísticos da capital: ");
    scanf("%d", &numero_pontos_turisticos_001);

    // Leitura dos dados da carta 02
    printf("==============================\n");
    printf("Cadastro da Carta 02\n");
    printf("==============================\n");

    printf("Digite a primeira letra do o estado (A-H): ");
    scanf(" %c", &estado_002); // O espaço antes de %c é para consumir qualquer caractere de nova linha deixado no buffer

    printf("Digite o código da carta (Ex: A01): ");
    scanf("%s", codigo_carta_002);

    printf("Digite o nome da capital: ");
    scanf(" %[^\n]", capital_002); // Permite ler o nome da capital com espaços

    printf("Digite a população da capital: ");
    scanf("%d", &populacao_002);

    printf("Digite o PIB da capital: ");
    scanf("%f", &pib_002);

    printf("Digite a área da capital: ");
    scanf("%f", &area_002);

    printf("Digite os pontos turísticos da capital: ");
    scanf("%d", &numero_pontos_turisticos_002);

    printf("==============================\n");
    printf("\n--- Carta 01 Criada ---\n");
    printf("==============================\n");

    densidade_populacional_001 = populacao_001 / area_001;
    pib_per_capita_001 = pib_001 / populacao_001;

    printf("Estado: %c\n", estado_001); 
    printf("Código da Carta: %s\n", codigo_carta_001);
    printf("Capital: %s\n", capital_001);
    printf("População: %d\n", populacao_001);
    printf("PIB: %.2f\n", pib_001);
    printf("Área: %.2f\n", area_001);
    printf("Pontos Turísticos: %d\n", numero_pontos_turisticos_001);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_001);
    printf("PIB Per Capita: %.2f\n", pib_per_capita_001);

    printf("==============================\n");
    printf("\n--- Carta 02 Criada ---\n");
    printf("==============================\n");

    densidade_populacional_002 = populacao_002 / area_002;
    pib_per_capita_002 = pib_002 / populacao_002;

    printf("Estado: %c\n", estado_002); 
    printf("Código da Carta: %s\n", codigo_carta_002);
    printf("Capital: %s\n", capital_002);
    printf("População: %d\n", populacao_002);
    printf("PIB: %.2f\n", pib_002);
    printf("Área: %.2f\n", area_002);
    printf("Pontos Turísticos: %d\n", numero_pontos_turisticos_002);
    printf("Densidade Populacional: %.2f\n", densidade_populacional_002);
    printf("PIB Per Capita: %.2f\n", pib_per_capita_002);
    printf("==============================\n");
    return 0;
}
