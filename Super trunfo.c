#include <stdio.h>

int main(){

    //A seguir estarei usando as variaveis para armazenar nomes de variaveis.
    //Ex da sintaxe: tipo_variavel(int,char ou float...)nome_variavel(estado,população...).
    //Agora estarei adicionado as informações sobre o estado e a cidade escolhida para a primeira carta.

    char estado[10] ="Alagoas";
    char codigo_da_carta[5] ="A01";
    char nome_da_cidade[10] ="Maceio";
    int populacao =1000000;
    float area_em_km =509.60;
    float PIB =266.422;
    int numero_de_pontos_turisticos =60;

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