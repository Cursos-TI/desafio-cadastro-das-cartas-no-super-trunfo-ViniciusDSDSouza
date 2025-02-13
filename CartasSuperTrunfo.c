#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado, codigoCarta[3], nomeCidade[20];
    int populacao, pontosTuristicos;
    float area, pib, densidadePopulacional, pibPerCapta;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o estado da cidade: ");
    scanf("%c", &estado);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigoCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);

    printf("Digite a população da cidade: ");
    scanf("%i", &populacao);

    printf("Digite a área da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%i", &pontosTuristicos);
    
    // Calculando a densidade populacional e o pibPerCapta
    densidadePopulacional = populacao/area;
    pibPerCapta = pib/populacao;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %c\nCódigo da Carta: %s\nNome: %s\nPoulação: %i\nÁrea: %.2fkm²\nPIB: %.2f\nPontos Turísticos: %i\nDensidade Populacional: %.2f\nPib Per Capta: %.2f\n",estado, codigoCarta, nomeCidade, populacao, area, pib, pontosTuristicos, densidadePopulacional, pibPerCapta);

    return 0;
}