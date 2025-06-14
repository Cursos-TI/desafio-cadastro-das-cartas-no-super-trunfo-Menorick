#include <stdio.h>
#include <stdlib.h>
#include <string.h> //serve pra ler a função do strcspn

int main() {
    char nome_estado1[50], codigo_estado1[10], nome_cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    char estado_2[50], codigo_estado2[10], nome_cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    //Adcionei o (fgets e stdin) para ler a linha completa e com espaços
    //e tambem adcionei getchar() para limpar o buffer, ja que nao posso usar while
    //o motivo e pq na segunda carta o estado e o codigo eram perguntados juntos

    printf("= PRIMEIRA CARTA =\n");
    printf("Digite o nome do Estado: ");
    fgets(nome_estado1, 50, stdin);
    nome_estado1[strcspn(nome_estado1, "\n")] = '\0'; 

    //A função (strcspn) e a expressão (= '\0') serve pro \n que pode ser lido pelo fgets ser removido da string de entrada.

    printf("Digite o código do Estado: ");
    fgets(codigo_estado1, 10, stdin);
    codigo_estado1[strcspn(codigo_estado1, "\n")] = '\0'; 

    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade1, 50, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; 

    printf("Digite a população total: ");
    scanf("%d", &populacao1);
    getchar(); 

    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    getchar(); 

    printf("Digite o PIB em milhões: ");
    scanf("%f", &pib1);
    getchar(); 

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    getchar(); 

    
    printf("\n= SEGUNDA CARTA =\n");
    printf("Digite o nome do Estado: ");
    fgets(estado_2, 50, stdin);
    estado_2[strcspn(estado_2, "\n")] = '\0';

    printf("Digite o código do Estado: ");
    fgets(codigo_estado2, 10, stdin);
    codigo_estado2[strcspn(codigo_estado2, "\n")] = '\0'; 

    printf("Digite o nome da Cidade: ");
    fgets(nome_cidade2, 50, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0'; 

    printf("Digite a população total: ");
    scanf("%d", &populacao2);
    getchar(); 

    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    getchar(); 

    printf("Digite o PIB em milhões: ");
    scanf("%f", &pib2);
    getchar(); 

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    getchar();

    printf("\n= PRIMEIRA CARTA =\n");
    printf("Estado: %s\n", nome_estado1);
    printf("Código: %s\n", codigo_estado1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f milhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);

    printf("\n= SEGUNDA CARTA =\n");
    printf("Estado: %s\n", estado_2);
    printf("Código: %s\n", codigo_estado2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
