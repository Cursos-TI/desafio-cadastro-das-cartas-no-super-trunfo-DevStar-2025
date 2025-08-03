#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1[30], estado2[30];
    char nomecidade1[40], nomecidade2[40];
    char codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float pibpercap1, pibpercap2;
    float superpoder1, superpoder2;
    int atributo;
    char tecla;
    int opcao;

    // Menu Principal
    while (opcao != 3) {
        printf("\n### MENU PRINCIPAL! ###\n");
        printf("1 - Iniciar o Jogo\n");
        printf("2 - Regras do jogo\n");
        printf("3 - Sair do jogo\n");
        printf("Escolha uma opção!\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
            printf("Desafio Super Trunfo\n");
            printf("\n### Escolha um atributo para comparação ###\n");
    printf("1 - População\n");
    printf("2 - Area\n");
    printf("3 - Pontos Turisticos\n");
    printf("4 - Densidade Populacional\n");
    printf("5 - PIB\n");
    printf("6 - Super Poder\n");
    scanf("%d", &atributo);
    getchar();


    

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

    superpoder2 = (1/densidade2 + populacao2 + area2 + pib2 +pontos_turisticos2);
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
    

  
    // Comparando as cartas com o atributo sorteado
//Atributo POPULAÇÂO
    printf("\nComparação das cartas\n");
    if (atributo == 1 && populacao1 > populacao2) {
    printf(" Parabens a carta %s ganhou em POPULAÇÃO\n", estado1);
}   if (atributo == 1 && populacao1 < populacao2) {
    printf(" Parabens a carta %s ganhou em POPULAÇÃO\n", estado2);
}   if (atributo == 1 && populacao1 == populacao2) {
    printf(" EMPATE em POPULAÇÃO\n");
}

// Atributo AREA

    if (atributo == 2 && area1 > area2) {
    printf(" Parabens a carta %s ganhou em AREA\n", estado1);
}   if (atributo == 2 && area1 < area2) {
    printf(" Parabens a carta %s ganhou em Area\n", estado2);
}   if (atributo == 2 && area1 == area2) {
    printf(" EMPATE em Area\n");
    } 

//Atributo PONTOS TURISTICOS

    if (atributo == 3 && pontos_turisticos1 > pontos_turisticos2) {
    printf(" Parabens a carta %s ganhou em PONTOS TURISTICOS\n", estado1);
}   if (atributo == 3 && pontos_turisticos1 < pontos_turisticos2) {
    printf(" Parabens a carta %s ganhou em PONTOS TURISTICOS\n", estado2);
}   if (atributo == 3 && pontos_turisticos1 == pontos_turisticos2) {
    printf(" EMPATE em PONTOS TURISTICOS\n");
    } 

//Atributo DENSIDADE POPULACIONAL
    
    if (atributo == 4 && densidade1 > densidade2) {
    printf(" Parabens a carta %s ganhou em Densidade Populacional\n", estado1);
}   if (atributo == 4 && densidade1 < densidade2) {
    printf(" Parabens a carta %s ganhou em Densidade Populacional\n", estado2);
}   if (atributo == 4 && densidade1 == densidade2) {
    printf(" EMPATE em Densidade Populacional\n");
    }

//atributo PIB
    
    if (atributo == 5 && pib1 > pib2) {
    printf(" Parabens a carta %s ganhou em PIB\n", estado1);
}   if (atributo == 5 && pib1 < pib2) {
    printf(" Parabens a carta %s ganhou em PIB\n", estado2);
}   if (atributo == 5 && pib1 == pib2) {
    printf(" EMPATE em PIB\n");
    }

//Atributo SUPER PODER
    
    if (atributo == 6 && superpoder1 > superpoder2) {
    printf(" Parabens a carta %s ganhou em Super Poder\n", estado1);
}   if (atributo == 6 && superpoder1 < superpoder2) {
    printf(" Parabens a carta %s ganhou em Super Poder\n", estado2);
}   if (atributo == 6 && superpoder1 == superpoder2) {
    printf(" EMPATE em Super Poder\n");
    }

 break;
            case 2:
                printf(" A regra geral é: vence a carta com o maior valor no atributo escolhido\n");
                printf(" Porém, para a Densidade Demográfica, a regra inverte\n");
                printf(" Vence a carta com o menor valor\n");
                printf("\n #para retornar ao menu principal aperte 9#\n");
                char tecla;
                do {
                    tecla = getchar();
                } while (tecla != '9');
                break;
            case 3:
                printf("Saindo do jogo...\n");
                return 0;
            default:
                printf("Opção incorreta , tente novamente!\n");
                break;
        }
    }
}