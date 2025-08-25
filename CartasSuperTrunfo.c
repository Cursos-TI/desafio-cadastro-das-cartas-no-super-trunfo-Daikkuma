#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // mensagens iniciais
    printf ("Desafio Super Trunfo - Países\n");
    printf ("Carta 1:\n");

    // Declarar as variaveis
    
    char estado;
    char codigo [50], nome_da_cidade [50];
    int populacao;
    float area;
    float pib;
    int numero_de_pontos_turisticos;

   
    // Solicitar dados ao usuario com prinf e armazenar dados usando especificador de variaveis
    // char [] contém string, onde já tem o endereco de memoria e & é usado para variáveis que guardam um único valor. 
    //Isso inclui números (int, float) e um único caractere (char).

    printf ("Digite uma letra de A-H representando um dos oito estados: ");
    scanf (" %c", &estado);

    printf ("Digite a letra do estado seguida de um numero de 01 a 04: ");
    scanf ("%s", codigo);
    
    printf ("Digite o nome da Cidade: ");
    scanf ("%s", nome_da_cidade);

    printf ("Digite o numero de habitantes: ");
    scanf (" %d", &populacao); //Adicionar espaco antes do % para prevenir erros de ``lixo de memoria``
    
    printf ("Digite a área em km2: ");
    scanf (" %f", &area);

    printf ("Digite o PIB: ");
    scanf (" %f", &pib);

    printf ("Digite o número de pontos turisticos: ");
    scanf (" %d", &numero_de_pontos_turisticos);
    printf ("\n");



    /* Exibição dos dados cadastrados com prinf de forma organizada e clara
     printf = mostrar na tela, ("Estado: %s\n") = Frase que vai aparecer junto com oque foi digitado e pulando 1 linha, "estado" = a descricao da variavel
    que cadastrei no topo
    */

    printf ("Carta 1:\n");
    printf ("Estado: %c\n", estado);
    printf ("Código da Carta: %s\n", codigo);
    printf ("Nome da Cidade: %s\n", nome_da_cidade);
    printf ("População: %d\n", populacao);
    printf ("Área: %f km²\n", area);
    printf ("PIB: %.2f bilhões de reais\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos);
    printf ("\n"); // pulando linha

    // Iniciando do código da Carta 2

    printf ("\nCarta 2:\n");

        // O Computador nao le duas variaveis com o mesmo nome entao foi alterado as descricoes seguida com o nunmero 2
    char estado2;
    char codigo2 [50], nome_da_cidade2 [50];
    int populacao2;
    float area2;
    float pib2;
    int numero_de_pontos_turisticos2;

   
    printf ("Digite uma letra de A-H representando um dos oito estados: ");
    scanf (" %c", &estado2);

    printf ("Digite a letra do estado seguida de um numero de 01 a 04: ");
    scanf ("%s", codigo2);
    
    printf ("Digite o nome da Cidade: ");
    scanf ("%s", nome_da_cidade2);

    printf ("Digite o numero de habitantes: ");
    scanf (" %d", &populacao2); 
    
    printf ("Digite a área em km2: ");
    scanf (" %f", &area2);

    printf ("Digite o PIB: ");
    scanf (" %f", &pib2);

    printf ("Digite o número de pontos turisticos: ");
    scanf (" %d", &numero_de_pontos_turisticos2);
    printf ("\n");


    printf ("Carta 2:\n");
    printf ("Estado: %c\n", estado2);
    printf ("Código da Carta: %s\n", codigo2);
    printf ("Nome da Cidade: %s\n", nome_da_cidade2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %f km²\n", area2);
    printf ("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", numero_de_pontos_turisticos2);
    printf ("\n"); // pulando linha
        

    return 0; // fim do programa
}
