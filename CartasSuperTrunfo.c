#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declaração das variáveis utilizadas no programa
    char estado; // Armazena a letra do estado (A a H)
    char codigoCarta[3]; // Armazena o código da carta (ex: "01", "02", "03", "04")
    char nomeCidade[20]; // Armazena o nome da cidade (até 19 caracteres + '\0' de terminação)
    int populacao; // Armazena a quantidade de habitantes da cidade
    int pontosTuristicos; // Armazena a quantidade de pontos turísticos
    float area; // Armazena a área total da cidade (em km²)
    float pib; // Armazena o PIB da cidade (em bilhões de reais)

    // **Cadastro da 1ª Carta**
    printf("Cadastro da 1° Carta:\n");

    // Solicita a letra do estado (A a H)
    printf("Carta 01 - Estado: Digite uma letra entre A e H:\n");
    scanf(" %c", &estado); // O espaço antes de %c evita problemas com caracteres residuais no buffer

    // Solicita o código da carta (entre "01" e "04")
    printf("Carta 01 - Código: Digite um número entre 01 e 04:\n");
    scanf("%s", codigoCarta); // %s lê uma string (sem espaços)

    // Solicita o nome da cidade (permitindo espaços)
    printf("Carta 01 - Nome da Cidade: Insira o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade); // O formato " %[^\n]" permite ler a string até a quebra de linha

    // Solicita a população da cidade
    printf("Carta 01 - População: Insira o número de habitantes da cidade:\n");
    scanf("%d", &populacao);

    // Solicita a área total da cidade
    printf("Carta 01 - Área da Cidade: Insira a área da cidade:\n");
    scanf("%f", &area);

    // Solicita o PIB da cidade
    printf("Carta 01 - PIB: Insira o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib);

    // Solicita a quantidade de pontos turísticos
    printf("Carta 01 - Pontos Turísticos: Insira a quantidade de Pontos Turísticos nesta cidade:\n");
    scanf("%d", &pontosTuristicos);

    // Exibe os dados cadastrados da 1ª carta
    printf("\n---------------------------------------------------------\n");
    printf("Carta 01 Cadastrada com Sucesso! Confira os dados abaixo.\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("---------------------------------------------------------\n");

    // **Cadastro da 2ª Carta**
    printf("Cadastro da 2° Carta:\n");

    // Solicita a letra do estado (A a H)
    printf("Carta 02 - Estado: Digite uma letra entre A e H:\n");
    scanf(" %c", &estado); // O espaço antes de %c previne problemas com o buffer

    // Solicita o código da carta (entre "01" e "04")
    printf("Carta 02 - Código: Digite um número entre 01 e 04:\n");
    scanf("%s", codigoCarta);

    // Solicita o nome da cidade (permitindo espaços)
    printf("Carta 02 - Nome da Cidade: Insira o nome da cidade:\n");
    scanf(" %[^\n]", nomeCidade);

    // Solicita a população da cidade
    printf("Carta 02 - População: Insira o número de habitantes da cidade:\n");
    scanf("%d", &populacao);

    // Solicita a área total da cidade
    printf("Carta 02 - Área da Cidade: Insira a área da cidade:\n");
    scanf("%f", &area);

    // Solicita o PIB da cidade
    printf("Carta 02 - PIB: Insira o Produto Interno Bruto da cidade:\n");
    scanf("%f", &pib);

    // Solicita a quantidade de pontos turísticos
    printf("Carta 02 - Pontos Turísticos: Insira a quantidade de Pontos Turísticos nesta cidade:\n");
    scanf("%d", &pontosTuristicos);

    // Exibe os dados cadastrados da 2ª carta
    printf("\n---------------------------------------------------------\n");
    printf("Carta 02 Cadastrada com Sucesso! Confira os dados abaixo.\n");
    printf("Estado: %c\n", estado);
    printf("Código: %c%s\n", estado, codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);
    printf("---------------------------------------------------------\n");

    return 0; // Retorna 0 indicando que o programa foi executado corretamente

}
