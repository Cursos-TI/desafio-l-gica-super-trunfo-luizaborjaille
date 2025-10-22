#include <stdio.h>

// Desafio Super Trunfo - Países
// #include <stdio.h>
#include <string.h>

// Estrutura que representa uma carta do Super Trunfo
struct Carta {
    char estado[3];              // Sigla do estado (ex: "SP")
    char codigo[4];              // Código da carta (ex: "A01")
    char cidade[30];             // Nome da cidade
    int populacao;               // População
    float area;                  // Área em km²
    float pib;                   // PIB em bilhões
    int pontos_turisticos;       // Número de pontos turísticos
    float densidade_populacional; // População / Área
    float pib_per_capita;         // PIB / População
};

int main() {
    // Cadastro das cartas (dados fixos para simplificação)
    struct Carta carta1, carta2;

    // Carta 1
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.cidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 699000000000; // PIB em reais
    carta1.pontos_turisticos = 50;
    carta1.densidade_populacional = carta1.populacao / carta1.area;
    carta1.pib_per_capita = carta1.pib / carta1.populacao;

    // Carta 2
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "A02");
    strcpy(carta2.cidade, "Rio de Janeiro");
    carta2.populacao = 6748000;
    carta2.area = 1182.30;
    carta2.pib = 364000000000; // PIB em reais
    carta2.pontos_turisticos = 45;
    carta2.densidade_populacional = carta2.populacao / carta2.area;
    carta2.pib_per_capita = carta2.pib / carta2.populacao;

    // Escolha do atributo para comparação (fixa no código)
    // Opções: populacao, area, pib, densidade_populacional, pib_per_capita
    printf("=== Comparação de Cartas Super Trunfo ===\n");
    printf("Atributo escolhido: PIB per capita\n\n");

    printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.cidade, carta1.estado, carta1.pib_per_capita);
    printf("Carta 2 - %s (%s): R$ %.2f\n\n", carta2.cidade, carta2.estado, carta2.pib_per_capita);

    // Comparação do atributo escolhido
    if (carta1.pib_per_capita > carta2.pib_per_capita) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.pib_per_capita > carta1.pib_per_capita) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}

=== Comparação de Cartas Super Trunfo ===
Atributo escolhido: PIB per capita

Carta 1 - São Paulo (SP): R$ 56829.27
Carta 2 - Rio de Janeiro (RJ): R$ 53943.25

Resultado: Carta 1 (São Paulo) venceu!
