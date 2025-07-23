#include <stdio.h>

int main(){
    
    printf("Desafio Super Trunfo\n");

    //Declaração de variáveis 

    char estado1[20], estado2[20];
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pibpercap1, pibpercap2;

    //Coletando os dados da primeira carta com o usuario

    printf("Digite o estado da primeira carta: ");
    scanf("%s", estado1);
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (float) (populacao1 / area1);
    pibpercap1 = (float) (pib1 / populacao1);

    //Coletando os dados da segunda carta com o usuario

    printf("Digite o estado da segunda carta: ");
    scanf("%s", estado2);
    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float) (populacao2 / area2);
    pibpercap2 = (float) (pib2 / populacao2);

    //Exibição dos dados da primeira carta

    printf("\nDados da primeira carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capta: %.2f\n", pibpercap1);

    //Exibição dos dados da segunda carta

    printf("\nDados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n" , densidade2);
    printf("PIB per Capta: %.2f\n", pibpercap2);

    return 0;
}