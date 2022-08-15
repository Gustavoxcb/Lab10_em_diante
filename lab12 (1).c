#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*exercicio 1

int main(){

    FILE *arq;

    char x;

    arq = fopen("caracteres.txt","w");

    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);

    }
    while(1){
        printf("Digite um caractere: ");
        scanf("%c", &x);
        fflush(stdin);

        if(x!='0'){
        fprintf(arq,"%c",x);
        }
        else
            break;
    }

    fclose(arq);

return 0;
}
*/

/*exercicio 2
int main(){

    FILE *arq;
    char c, x;
    int i, qtd = 0;


    arq = fopen("caracteres.txt","r");

    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);

    }

    printf("Digite o caractere do arquivo a ser lido: ");
    fflush(stdin);
    scanf("%c", &c);

    while(1){
        fscanf(arq, "%c", &x);
        if(feof(arq))
            break;
        if(c == x)
            qtd++;
    }

    printf("O caractere escolhido aparece %d vezes no arquivo", qtd);

    fclose(arq);



return 0;
}
*/

/*exercicio 3
int main(){

    FILE *arq;

    int x;
    char nome[50];
    int idade;
    int altura;

    arq = fopen("pessoas.txt","w");

    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);

    }

    while(1){
        printf("\nDigite 0 para finalizar o programa ou digite 1 para preencher os dados de uma pessoa: ");
        scanf("%d", &x);

        if(x == 1){
            printf("\nDigite o nome de uma pessoa: ");
            fflush(stdin);
            gets(nome);
            fprintf(arq,"%s\n",nome);

            printf("\nDigite a idade de uma pessoa: ");
            scanf("%d", &idade);
            fprintf(arq,"%d\n",idade);

            printf("\nDigite a altura de uma pessoa: ");
            scanf("%d", &altura);
            fprintf(arq,"%d\n",altura);

        }
        else if(x == 0)
            break;
            else
                printf("\nVoce digitou um numero invalido!");
        }

    fclose(arq);

return 0;
}
*/

/*exercicio 4
int main(){

    FILE *arq;
    char nomelido[50];
    char nome[50];
    int idade;
    int altura;

    arq = fopen("pessoas.txt","r");

    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);

    }
    printf("Digite o nome a ser lido: ");
    scanf("%s", &nomelido);

    while(feof(arq)!=0){
    fscanf(arq, "%s", &nome);
    if(nome == nomelido){
        printf("%d %d", idade, altura);
    }

  }

    fclose(arq);

return 0;
}
*/
/*exercicio 5
int main(){

    FILE *arq;

    int x;
    char nome[50];
    int idade;
    int altura;

    arq = fopen("pessoas.bin","wb");

    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);

    }

    while(1){
        printf("\nDigite 0 para finalizar o programa ou digite 1 para preencher os dados de uma pessoa: ");
        scanf("%d", &x);

        if(x == 1){
            printf("\nDigite o nome de uma pessoa: ");
            fflush(stdin);
            gets(nome);
            fwrite(nome,sizeof(char),strlen(nome),arq);

            printf("\nDigite a idade de uma pessoa: ");
            scanf("%d", &idade);
            fwrite(&idade,sizeof(int),3,arq);

            printf("\nDigite a altura de uma pessoa: ");
            scanf("%d", &altura);
            fwrite(&altura,sizeof(int),3,arq);

        }
        else if(x == 0)
            break;
            else
                printf("\nVoce digitou um numero invalido!");
        }

    fclose(arq);

return 0;
}
*/
/*exercicio 6
int main(){

    FILE *arq;
    char nomelido[50];
    char nome[50];
    int idade;
    int altura;

    arq = fopen("pessoas.bin","rb");

    if(arq == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);

    }
    printf("Digite o nome a ser lido: ");
    scanf("%s", &nomelido);

    while(feof(arq)!=0){
    fscanf(arq, "%s", &nome);
    if(nome == nomelido){
        printf("%d %d", idade, altura);
    }

  }

    fclose(arq);

return 0;
}
*/
