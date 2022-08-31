#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int vetOriginal[10];

void vetor(){
    srand(time(NULL));
    for(int i=0; i<=9; i++){
        vetOriginal[i]=rand() % 100;
        printf("\nvetOriginal[%d] = %d",i,vetOriginal[i]);
    }
}
void Qst1(int *vetor){

    int i;
    for(int i=0; i<=9; i++){
        vetor[i]=rand() % 100;
 
    printf("\nvetOriginal[%d] = %d",i,vetor[i]);
    }      
}
void Qst2(int *vetor){

    int maior=0,menor=999;
    for(int i=0; i<=9; i++){
        printf("\nVetoriginal[%d] = %d", i, vetor[i]);
    }
    for(int i=0; i<=9; i++){
        if(maior < vetor[i]){
            maior = vetor[i];
        }
        if(menor > vetor[i]){
            menor = vetor[i];
        }   
    }
    printf("\n\n|---------------------------------------------|\n");
    printf("|Dentre os numeros acima, o maior valor e: %d |",maior);
    printf("\n|---------------------------------------------|");

}
void Qst3(int *vetor){

    int cont=0;
    
    for(int i=0; i<=9; i++){
        if(vetor[i] % 2 == 0){
            printf("\nvetOriginal[%d] = %.2d  <--> PAR!",i,vetor[i]);
            cont++;
        }else{
            printf("\nvetOriginal[%d] = %.2d",i,vetor[i]);
        }
    }
    printf("\n\n|>Quantidade de numeros pares: %d <|", cont);
}
void Qst4(int *vetor){

    int soma=0;

    for(int i=0; i<=9; i++){
        soma += vetor[i];
    }
    for(int i=0; i<=9; i++){
        printf("\nvetOriginal[%d] = %d",i,vetor[i]);    
    }
    printf("\n\nA soma dos valores do vetor e: %d",soma);
}
void Qst5(int *vetor){

    int fim=9, troca;

    printf("\n|-------------------------------------------------|\n");
    printf("|                  Vetor Original!                |");
    printf("\n|-------------------------------------------------|\n");
    printf("|-------------------------------------------------|\n");

    for(int i=0; i<=9; i++){
        printf("| %.2d ",vetor[i]);
    }
    printf("|\n|-------------------------------------------------|\n");
    for(int i=0; i<5; i++){
        troca=vetor[i];
        vetor[i]=vetor[fim];
        vetor[fim]=troca;
        fim--;
    }
    printf("\n|-------------------------------------------------|\n");
    printf("|                  Vetor Inverso!                 |");
    printf("\n|-------------------------------------------------|\n");
    printf("|-------------------------------------------------|\n");

    for(int i=0; i<=9; i++){
        printf("| %.2d ",vetor[i]);
    }
    printf("|\n|-------------------------------------------------|\n");
}
void Qst6(int *vetor){

    int ordem, troca;

    printf("\n|-------------------------------------------------|\n");
    printf("|                 Vetor Original!                 |");
    printf("\n|-------------------------------------------------|\n");
    printf("|-------------------------------------------------|\n");
    
    for(int i=0; i<=9; i++){
        printf("| %.2d ", vetor[i]);
    }
    printf("|\n|-------------------------------------------------|\n");
    
    do{
        troca = 0;
        for(int i=0; i<=8; i++){
            if(vetor[i] > vetor[i+1]){
                ordem = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = ordem;
                troca = 1;
            }
        }
    }while(troca == 1);
    
    printf("\n|-------------------------------------------------|\n");
    printf("|                 Vetor Ordenado!                 |");
    printf("\n|-------------------------------------------------|\n");
    printf("|-------------------------------------------------|\n");
    for(int i=0; i<=9; i++){
        printf("| %.2d ",vetor[i]);
    }
    printf("|\n|-------------------------------------------------|\n");
}
int main(){
    
    int opcao,loop = 0;
    char resp;

    do{
        setlocale(LC_ALL,"");

        printf("\n||============================================================================||\n");
        printf("||-------->>>                   MENU | TRABALHO                    <<<--------||\n");
        printf("||============================================================================||\n");
        printf("||----------------------------------------------------------------------------||\n");
        printf("|| Digite [1] - Criar um vetor com 10 numeros aleatorios.                     ||\n");
        printf("|| Digite [2] - Mostrar o elemento de maior valor do vetOriginal.             ||\n");
        printf("|| Digite [3] - Contabilizar quantos elemento sao pares do vetOriginal.       ||\n");
        printf("|| Digite [4] - Mostrar o valor do somatorio dos elementos do vetOriginal.    ||\n");
        printf("|| Digite [5] - Mostrar os elementos do vetOriginal na ordem inversa.         ||\n");
        printf("|| Digite [6] - Ordenar o vetor crescentemente.                               ||\n");
        printf("|| Digite [7] - SAIR.                                                         ||\n");
        printf("||============================================================================||\n\n");
        printf("Opcao escolhida: ");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                Qst1(&vetOriginal);
            break;
            case 2:
                Qst2(&vetOriginal);
            break;
            case 3:
                Qst3(&vetOriginal);
            break;
            case 4:
                Qst4(&vetOriginal);
            break;
            case 5:
                Qst5(&vetOriginal);
            break;
            case 6:
                Qst6(&vetOriginal);
            break;
            case 7:
                printf("\nOk, saindo....\n\n");
            break;
            default:
                printf("\nErro!!! Escolha entre as opcoes acima, de 1 a 7!!!\n\n");
            break;
        }
        printf("\n\nDeseja continuar? \n[S]-Sim | [N]-Nao : ");
        scanf(" %c",&resp);

            if(resp == 'S'||resp == 's'){
                loop = 1;
            }else if(resp == 'N'||resp == 'n'){
                printf("\nOk, encerrando...\n\n");
                loop = 0;
                
            }else{
                printf("\nEscolha entre [S|s] ou [N|n] !!!\n");
            }
            system("cls");  
            /* system("cls") é usado para limpar a tela. */

    }while(loop == 1);
 
    return 0;
}