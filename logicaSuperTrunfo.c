#include <stdio.h>

int main() {
    char estado_letra;
    char codigo[4];
    char cidade[50];
    unsigned long int populacao = 30;
    float area;
    double pib;
    int pturismo;
    float densip;
    float percapta;
    float superpoder, superpoder2;
    float denpoder, denpoder2;
    float respopulacao, resarea, respib, respturismo;
    float resultadopoder, resultadoDensidade;

    printf("Digite uma letra de A a Z \n");
    scanf("%c", &estado_letra);
     
    printf("Digite 01 a 04: \n");
    scanf("%s", codigo);
    
    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidade), getchar();
    
    //printf("População total: \n");
    //scanf("%lu", &populacao);
    
    printf("Digite a área total: \n");
    scanf("%f", &area);
    
    printf("Pib : \n");
    scanf("%lf", &pib);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pturismo);

    //Aplicando a divisão que efetuará a densidade populacional e o pib per capta.
    densip = (float)populacao / area;
    percapta = pib * 1000000000.0 / populacao;
    denpoder = 1.0 / densip;
    superpoder = pturismo + pib + area + populacao + denpoder;
    
   

    //Recomeçando pra as cartas 2:
    char estado_letra2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2 = 10;
    float area2;
    double pib2;
    int pturismo2;
    float densip2;
    float percapta2;
    



    //informações pra digitar:
    printf("Digite uma letra de A a Z \n");
    scanf(" %c", &estado_letra2);
     
    printf("Digite 01 a 04: \n");
    scanf("%s", codigo2);
    
    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidade2), getchar();
    
    //printf("População total: \n");
    //scanf("%lu", &populacao2);
    
    printf("Digite a área total: \n");
    scanf("%f", &area2);
    
    printf("Pib per capta: \n");
    scanf("%lf", &pib2);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pturismo2);
    
    //Cálculos:
    densip2 = (float)populacao2 / area2;
    percapta2 = pib2 * 1000000000.0 / populacao2;
    denpoder2 = 1.0 / densip2;
    superpoder2 = pturismo2 + pib2 + area2 + populacao2 + denpoder2;
    //respopulacao = populacao > populacao2;
    resarea = area > area2;
    respib = pib > pib2;
    respturismo = pturismo > pturismo2;
    resultadopoder = superpoder > superpoder2;
    resultadoDensidade = densip < densip2;

    //Exibindo parte 1:
    printf("Estado digitado: %c \n", estado_letra);
    printf("Código digitado: %c%s \n",estado_letra, codigo);
    printf("Cidade: %s \n", cidade);
    printf("População total: %lu \n", populacao);
    printf("Área total: %.2f \n", area);
    printf("Pib total: %.2f \n", pib);
    printf("Número total turistas: %d \n", pturismo);
    printf("Densidade: %f \n", densip);
    printf("Per capta: %f \n", percapta);


    //Exibindo cartas 2:
    printf("Estado digitado: %c \n", estado_letra2);
    printf("Código digitado: %c%s \n",estado_letra2, codigo2);
    printf("Cidade: %s \n", cidade2);
    //printf("População total: %lu \n", populacao2);
    printf("Área total: %.2f \n", area2);
    printf("Pib total: %.2f \n", pib2);
    printf("Número total turistas: %d \n", pturismo2);
    printf("Densidade populacional: %f \n", densip2);
    printf("Per capta: %f \n", percapta2 );

    //Resultado vencedor:
    //printf("População: Carta 1 venceu? %d\n Área: Carta 1 venceu? %d\n PIB: Carta 1 venceu?%d\n Pontots turísticos: Carta 1 venceu? %d\n Densidade populaciona: carta 1 venceu?%d\n Super poder: Carta 1 venceu? %d\n",
        //respopulacao, resarea, respib, respturismo, resultadoDensidade , resultadopoder);
    
    if ( populacao > populacao2){
        printf("Carta 1 - população é: %lu \n, carta 1 Venceu!!!", populacao);
    } else {
        printf("Carta 2 - População é: %lu, carta 2 VENCEU!!! \n", populacao2);
    }
    
    

    return 0;
}

