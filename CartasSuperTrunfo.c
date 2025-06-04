#include <stdio.h>

int main(){
    int Estado;
    char codigodacarta[50];
    char Nomedacidade[50];
    int Populacao;
    float Area;
    float Pib;
    int Numerodepontosturisticos;


    printf("Digite o estado da carta: \n");
    scanf("%d", &Estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigodacarta);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", Nomedacidade);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &Populacao);

    printf("Digite a area da cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &Pib);

    printf("Digite o numero de pontos turisticos da cidade: \n");
    scanf("%d", &Numerodepontosturisticos);

    printf("Estado: %d\n", Estado);
    printf("Codigo da carta: %s\n", codigodacarta);
    printf("Nome da cidade: %s\n", Nomedacidade);
    printf("Populacao: %d\n", Populacao);
    printf("Area: %.2f\n", Area);
    printf("PIB: %.2f\n", Pib);
    printf("Numero de pontos turisticos: %d\n", Numerodepontosturisticos);


    return 0;


}