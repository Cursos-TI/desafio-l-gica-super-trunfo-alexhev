#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main() {
    char estado_letra= 'a';
    char codigo[4];
    char cidade[50];
    unsigned long int populacao = 10;
    float area = 10;
    double pib = 10;
    int pturismo = 10;
    float densip = 10;
    float percapta = 10;
    float superpoder, superpoder2;
    float denpoder , denpoder2 ;
    float respopulacao , resarea , respib, respturismo;
    float resultadopoder , resultadoDensidade ;
    int jogo1;

    
    
    /*printf("Digite uma letra de A a Z \n");
    scanf("%c", &estado_letra);
     
    printf("Digite 01 a 04: \n");
    scanf("%s", codigo);
    
    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidade), getchar();
    
    printf("População total: \n");
    scanf("%lu", &populacao);
    
    printf("Digite a área total: \n");
    scanf("%f", &area);
    
    printf("Pib : \n");
    scanf("%lf", &pib);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pturismo);*/

    //Aplicando a divisão que efetuará a densidade populacional e o pib per capta.
    densip = (float)populacao / area;
    percapta = pib * 1000000000.0 / populacao;
    denpoder = 1.0 / densip;
    superpoder = pturismo + pib + area + populacao + denpoder;
    
   

    //Recomeçando pra as cartas 2:
    char estado_letra2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2 = 60;
    float area2 = 60;
    double pib2 = 60;
    int pturismo2 = 60;
    float densip2 =60;
    float percapta2 = 60;
    

    
    //informações pra digitar:
    /*printf("Digite uma letra de A a Z \n");
    scanf(" %c", &estado_letra2);
     
    printf("Digite 01 a 04: \n");
    scanf("%s", codigo2);
    
    printf("Digite a cidade: \n");
    scanf(" %[^\n]", cidade2), getchar();
    
    printf("População total: \n");
    scanf("%lu", &populacao2);
    
    printf("Digite a área total: \n");
    scanf("%f", &area2);
    
    printf("Pib per capta: \n");
    scanf("%lf", &pib2);
    
    printf("Número de pontos turísticos: \n");
    scanf("%d", &pturismo2);*/
    
    //Cálculos:
    densip2 = (float)populacao2 / area2;
    percapta2 = pib2 * 1000000000.0 / populacao2;
    denpoder2 = 1.0 / densip2;
    superpoder2 = pturismo2 + pib2 + area2 + populacao2 + denpoder2;
    respopulacao = populacao > populacao2;
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
    printf("População total: %lu \n", populacao2);
    printf("Área total: %.2f \n", area2);
    printf("Pib total: %.2f \n", pib2);
    printf("Número total turistas: %d \n", pturismo2);
    printf("Densidade populacional: %f \n", densip2);
    printf("Per capta: %f \n", percapta2 );

    //Menu para o jogador escolher um atributo:
    printf("Jogador 1 - Escolha um atributo:\n");
    printf("1. cidade\n");
    printf("2. população\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Turismo\n");
    printf("6. Densidade\n");
    printf("7. Percapta\n");
    printf("8. Super poder\n");
    scanf("%d", &jogo1);

    switch (jogo1){
        case 1:{
            if(area > area2){
                printf("Carta 1  venceu\n");
            } else {
                printf("Carta 2 venceu !!! \n");
            }
            break;
        }
        case 2:{
            if(pib > pib2){
                printf("Carta 1 venceu\n");
            } else  {
                printf("Carta 2 venceu \n");
            }
            break;
        }case 3:{
            if(pturismo > pturismo2){
                printf("Carta 1 venceu!!\n");
            } else {
                printf("carta 2 venceu!! \n");
            }
            break;
        }case 4:{
            if(densip < densip2){
                printf("Carta 1 venceu!! \n");
            } else {
                printf("carta 2 venceu!!");
            }
            break;
        }case 5:{
            if(percapta > percapta2){
                printf("Carta 1 venceu!! \n");
            } else {
                printf("Carta 2 venceu!! \n");
            }
            break;
        }case 6:{
            if(superpoder > superpoder2){
                printf("carta 1 venceu!! \n");
            } else {
                printf("Carta 2 venceu!! \n");
            }
            break;
        default:
            printf("Opção não permitida!!\n");
                   
        } 
    }

    //Menu interativo para o segundo jogador:
    /*Printf("Jogador 2 - Escolha um atributo :\n");
    Printf("1. cidade\n");
    Printf("2. população\n");
    Printf("3. Área\n");
    Printf("4. PIB\n");
    Printf("5. Turismo\n");
    Printf("6. Densidade\n");
    Printf("7. Percapta\n");
    Printf("8. Super poder\n");*/
    
    /*switch (jogo2){
        case 1:{
            printf(" Esolheu cidade /n");
            break;
        }
        case 2:{
            printf("Escolheu População");
            break;
        }case 3:{
            printf("Escolheu Área");
            break;
        }case 4:{
            printf("Escolheu Pib");
            break;
        }case 5:{
            printf("Escolheu Turismo");
            break;
        }case 6:{
            printf("Escolheu Densidade");
            break;
        }case 7:{
            printf("Escolheu Per capta");
            break;
        }case 8:{
            printf("Escolheu Super Poder");
            break;
            default:
            {
            printf("Opção não aceita\n"); 
            }*/   
        } 
    

        //Resultado vencedor: Parte do exercício anterior, não utilizar agora.
    //printf("População: Carta 1 venceu? %d\n Área: Carta 1 venceu? %d\n PIB: Carta 1 venceu?%d\n Pontots turísticos: Carta 1 venceu? %d\n Densidade populaciona: carta 1 venceu?%d\n Super poder: Carta 1 venceu? %d\n",
        //respopulacao, resarea, respib, respturismo, resultadoDensidade , resultadopoder);
    
        
     
    

    
    
    
    
    
    
    
    
    
    
    
  

