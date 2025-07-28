#include <stdio.h>
#include <string.h>

int main(){
    
    printf("Desafio Super Trunfo\n");

    //Declaração de variáveis 

    char estado1[30], estado2[30];
    char nomecidade1[40], nomecidade2[40];
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pibpercap1, pibpercap2;
    float superpoder1 , superpoder2;
    unsigned long int populacaototal;
    char atributo[50];

    //Coletando os dados da primeira carta com o usuario

    printf("Digite o estado da primeira carta: ");
    scanf(" %[^\n]", &estado1);
    printf("Digite a cidade da primeira carta: ");
    scanf(" %[^\n]", &nomecidade1);
    printf("Digite o código da primeira carta: ");
    scanf("%s", codigo1);
    printf("Digite a população da primeira carta: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da primeira carta: ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira carta: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da primeira carta: ");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (float) (populacao1 / area1);
    pibpercap1 = (float) (pib1 / populacao1);

    superpoder1 = (1/densidade1) + populacao1 + area1 + pib1 +pontos_turisticos1;
    printf("Super poder :%.2f\n",superpoder1 );


    //Coletando os dados da segunda carta com o usuario

    printf("Digite o estado da segunda carta: ");
    scanf(" %[^\n]", &estado2);
     printf("Digite a cidade da primeira carta: ");
    scanf(" %[^\n]", &nomecidade2);
    printf("Digite o código da segunda carta: ");
    scanf("%s", codigo2);
    printf("Digite a população da segunda carta: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da segunda carta: ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda carta: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da segunda carta: ");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float) (populacao2 / area2);
    pibpercap2 = (float) (pib2 / populacao2);

    superpoder1 = (1/densidade2 + populacao2 + area2 + pib2 +pontos_turisticos2);
    printf("Super poder :%.2f\n",superpoder2 );

    //Exibição dos dados da primeira carta

    printf("\nDados da primeira carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capta: %.2f\n", pibpercap1);

    //Exibição dos dados da segunda carta

    printf("\nDados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n" , densidade2);
    printf("PIB per Capta: %.2f\n", pibpercap2);

    /*Atributo para comparação de acordo com a soma das duas populações , se for impar
será utilizado o PIB se for par será utilizado os pontos turisticos*/
    populacaototal = populacao1 + populacao2;

    // Definindo o atributo para comparação
    if (populacaototal % 2 == 0) {
        strcpy(atributo, "Pontos Turisticos");
    } else {
        strcpy(atributo, "PIB");
    }

    printf("\nO Atributo escolhido foi %s\n", atributo);

    // Comparando as cartas com o atributo sorteado
    printf("\nComparação das cartas\n");
    if (strcmp(atributo, "Pontos Turisticos") == 0) {
        if (pontos_turisticos1 > pontos_turisticos2) {
            printf("Parabens a carta %s Ganhou nos %s!\n", estado1, atributo);
        } else {
            printf("Parabens a carta %s Ganhou nos %s!\n", estado2, atributo);
        }
    } else {
        if (pib1 > pib2) {
            printf("Parabens a carta %s Ganhou no %s!\n", estado1, atributo);
        } else {
            printf("Parabens a carta %s ganhou no %s!\n", estado2, atributo);
        }
    }

    return 0;
}