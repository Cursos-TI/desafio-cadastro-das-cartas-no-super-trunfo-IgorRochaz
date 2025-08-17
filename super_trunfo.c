#include <stdio.h>
#include <string.h>

    int main (){

        //carta 1
        char estado1;
        char codigo1[4];
        char nomedacidade1[50];
        int populacao1 , numerodepontos1;
        float area1 , pib1;

        //carta 2
        char estado2;
        char codigo2[4];
        char nomedacidade2[50];
        int populacao2 , numerodepontos2;
        float area2 , pib2;



// dados carta 1
        printf("digite uma letra de A-H :\n");
        scanf(" %c" , &estado1);

        printf("digite o código da carta  (letra do estado seguida de um número de 01 a 04): \n");
        scanf("%s" , codigo1);

        printf("digite o nome da cidade : \n");
        scanf(" ");
        fgets(nomedacidade1, sizeof(nomedacidade1), stdin);
        nomedacidade1[strcspn(nomedacidade1, "\n")] = '\0';

        
        printf("digite a população :\n");
        scanf("%d", &populacao1);

        printf("digite a área : \n");
        scanf(" %f" , &area1 );

        printf("digite o PIB : \n ");
        scanf("%f", &pib1);

        printf("digite os pontos turisticos \n");
        scanf("%d" , &numerodepontos1);

        //exibe a carta 1
        printf("Carta 1 \n");
        printf("Estado : %c \n" , estado1);
        printf("Código da carta : %s \n" , codigo1);
        printf("Nome da cidade : %s \n " , nomedacidade1);
        printf("População : %d \n" , populacao1);
        printf("Área : %f \n" ,area1);
        printf("PIB : %f  bilhões de reais \n" ,pib1);
        printf("Números de pontos Túristicos : %d \n" , numerodepontos1);

//dados carta 2
        printf("digite uma letra de A-H :\n");
        scanf(" %c" , &estado2);

        printf("digite o código da carta  (letra do estado seguida de um número de 01 a 04): \n");
        scanf("%s" , codigo2);

        printf("digite o nome da cidade : \n");
        scanf(" ");
    fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
    nomedacidade2[strcspn(nomedacidade2, "\n")] = '\0';
        
        printf("digite a população :\n");
        scanf("%d", &populacao2);

        printf("digite a área : \n");
        scanf(" %f" , &area2 );

        printf("digite o PIB : \n ");
        scanf("%f", &pib2);

        printf("digite os pontos turisticos \n");
        scanf("%d" , &numerodepontos2);

//exibe carta 2
        printf("Carta 2 \n");
        printf("Estado : %c \n" , estado2);
        printf("Código da carta : %s \n" , codigo2);
        printf("Nome da cidade : %s \n " , nomedacidade2);
        printf("População : %d \n" , populacao2);
        printf("Área : %f \n" ,area2);
        printf("PIB : %f  bilhões de reais \n" ,pib2);
        printf("Números de pontos Túristicos : %d \n" , numerodepontos2);

        return 0 ;

    }
