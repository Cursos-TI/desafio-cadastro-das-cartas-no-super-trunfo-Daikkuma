#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Mensagens Iniciais
    printf("Desafio Super Trunfo - Países\n");
    
    // Declarar as variaveis
    // Solicitar dados ao usuario com prinf e armazenar dados usando especificador de variaveis
    // char [] contém string, onde já tem o endereco de memoria e & é usado para variáveis que guardam um único valor. 
    //Isso inclui números (int, float) e um único caractere (char).

    // Carta - 1
    char estado_1;
    char codigo_1[50], nome_da_cidade_1[50];
    unsigned long int populacao_1; // unsigned long int para suportar populações maiores.
    float area_1;
    float pib_1;
    int numero_de_pontos_turisticos_1;
    float densidade_populacional_1;
    float PIB_per_capita_1;
    float superPoder_1; 
    

    // O Computador nao le duas variaveis com o mesmo nome entao foi alterado as descricoes seguida com o nunmero 2
    // Carta - 2
    char estado_2;
    char codigo_2[50], nome_da_cidade_2[50];
    unsigned long int populacao_2; 
    float area_2;
    float pib_2;
    int numero_de_pontos_turisticos_2;
    float densidade_populacional_2;
    float PIB_per_capita_2;
    float superPoder_2; 

    // Variável para guardar o resultado de cada comparação (será reaproveitada)
    int resultado;




    // Cadastro carta 1
    printf("Cadastro da Carta 1\n");
    printf("Digite uma letra de A-H representando um dos oito estados: ");
    scanf(" %c", &estado_1);

    printf("Digite a letra do estado seguida de um numero de 01 a 04: ");
    scanf("%s", codigo_1);
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_da_cidade_1);

    printf("Digite o numero de habitantes: ");
    scanf(" %lu", &populacao_1); // "%lu" é o especificador para unsigned long int. //Adicionar espaco antes do % para prevenir 
    //erros de ``lixo de memoria``
                                
    printf("Digite a area em km2: ");
    scanf(" %f", &area_1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib_1);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &numero_de_pontos_turisticos_1);


    // Cadastro carta 2
    printf("\nCadastro da Carta 2\n");
    printf("Digite uma letra de A-H representando um dos oito estados: ");
    scanf(" %c", &estado_2);

    printf("Digite a letra do estado seguida de um numero de 01 a 04: ");
    scanf("%s", codigo_2);
    
    printf("Digite o nome da Cidade: ");
    scanf("%s", nome_da_cidade_2);

    printf("Digite o numero de habitantes: ");
    scanf(" %lu", &populacao_2);
    
    printf("Digite a area em km2: ");
    scanf(" %f", &area_2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib_2);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &numero_de_pontos_turisticos_2);


    // atribuicoes

    // Carta 1
    densidade_populacional_1 = (float)populacao_1 / area_1; 
    PIB_per_capita_1 = pib_1 / (float)populacao_1; // adicionado float para fazer as contas de numero inteiro com flutuante e dividir os valores pela populacao, area e pib
    
    // a soma de  todos divido pela densidade
    superPoder_1 = (float)populacao_1 + area_1 + pib_1 + numero_de_pontos_turisticos_1 + PIB_per_capita_1 + (1 / densidade_populacional_1);

    // Carta 2
    densidade_populacional_2 = (float)populacao_2 / area_2;
    PIB_per_capita_2 = pib_2 / (float)populacao_2;

    // Carta 2.
    superPoder_2 = (float)populacao_2 + area_2 + pib_2 + numero_de_pontos_turisticos_2 + PIB_per_capita_2 + (1 / densidade_populacional_2);


    /* Exibição dos dados cadastrados com prinf de forma organizada e clara
     printf = mostrar na tela, ("Estado: %s\n") = Frase que vai aparecer junto com oque foi digitado e pulando 1 linha, "estado" = a descricao da variavel
    que cadastrei no topo
    */
    // Dados cadastrados
    printf("\nDADOS DAS CARTAS CADASTRADAS\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Codigo da Carta: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", nome_da_cidade_1);
    printf("Populacao: %lu\n", populacao_1); 
    printf("Area em km2: %.2f\n", area_1);
    printf("PIB: R$%.2f\n", pib_1);
    printf("Pontos Turisticos: %d\n", numero_de_pontos_turisticos_1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional_1);
    printf("PIB per Capita: R$%.2f\n", PIB_per_capita_1);
    printf("Super Poder: %.2f\n", superPoder_1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Codigo da Carta: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", nome_da_cidade_2);
    printf("Populacao: %lu\n", populacao_2); 
    printf("Area em km2: %.2f\n", area_2);
    printf("PIB: R$%.2f\n", pib_2);
    printf("Pontos Turisticos: %d\n", numero_de_pontos_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional_2);
    printf("PIB per Capita: R$%.2f\n", PIB_per_capita_2);
    printf("Super Poder: %.2f\n", superPoder_2);


    printf("\nCOMPARACAO DE CARTAS\n");
    printf("Resultado (1 = Carta 1 venceu, 0 = Carta 2 venceu):\n\n");
    
    // Usa a variável 'resultado' para a população
    resultado = populacao_1 > populacao_2;
    printf("Populacao: %d\n", resultado);

        resultado = area_1 > area_2;
    printf("Area: %d\n", resultado);
   
    resultado = pib_1 > pib_2;
    printf("PIB: %d\n", resultado);

    resultado = numero_de_pontos_turisticos_1 > numero_de_pontos_turisticos_2;
    printf("Pontos Turisticos: %d\n", resultado);
    
    // Densidade, a MENOR vence
    resultado = densidade_populacional_1 < densidade_populacional_2;
    printf("Densidade Populacional: %d\n", resultado);
    
    resultado = PIB_per_capita_1 > PIB_per_capita_2;
    printf("PIB per Capita: %d\n", resultado);
    
    resultado = superPoder_1 > superPoder_2;
    printf("Super Poder: %d\n", resultado);
    printf ("\n"); // pulando linha

    return 0; // fim do programa
}