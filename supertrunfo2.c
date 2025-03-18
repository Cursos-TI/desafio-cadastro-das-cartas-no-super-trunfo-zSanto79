#include <stdio.h>

int main(){

    //A seguir estarei usando as variaveis para armazenar nomes de variaveis.
    //Ex da sintaxe: tipo_variavel(int,char ou float...)nome_variavel(estado,população...).
    //Agora estarei adicionado as informações sobre o estado e a cidade escolhida para a segunda carta.

    char estado[10] ="Ceará";
    char codigo_da_carta[5] ="C02";
    char nome_da_cidade[10] ="Fortaleza";
    int populacao =2000000;
    float area_em_km =312.353;
    float PIB =734.361;
    int numero_de_pontos_turisticos =28;

    //agora usarei a função "printf" para exibir as caracteristicas da carta.
    //Ex da sintaxe:printf(''texto com formatação'', variavel1, variavel2, ...).

    printf("Estado: %s\n", estado);
    printf("Código da carta: %s\n", codigo_da_carta);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área em Km²: %.2f\n", area_em_km);
    printf("PIB: %.2f\n", PIB);
    printf("Número de pontos turisticos: %d\n", numero_de_pontos_turisticos);

    //Para finalizar usarei o comando(return 0;)que diz que o programa rodou com sucesso.

    return 0;
}