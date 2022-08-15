#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*exercicio 1

int main(){

    int* p;
    int i, n;

    printf("Digite o tamanho de um array: ");
    scanf("%d", &n);

    p = (int*) malloc(n*sizeof(int));

    printf("Digite os valores desse vetor: ");
    for(i=0; i<n; i++){
       scanf("%d", &p[i]);
    }

    for(i=0; i<n; i++){
       printf("%d", p[i]);
    }

    free(p);
return 0;
}
*/
/*exercicio 2
 int main(){

    char* p;
    int i, n;

    printf("Digite o tamanho da string: ");
    scanf("%d", &n);

    p = (char*) malloc(n+1*sizeof(char));

    printf("Digite o conteudo dessa string: ");
    fflush(stdin);
    gets(p);

    for(i=0; i<n; i++){
       printf("%c", p[i]);
    }

    free(p);

 return 0;
 }
*/
/*exercicio 3
int main(){

     int* p;
     int i, soma = 0;

     p = (int*) calloc(1500,sizeof(int));

     for(i=0; i<1500; i++){
           printf("%d", p[i]);
        }
     for(i=0; i<1500; i++){
            soma++;
           printf("\n%d", soma);
        }
     printf("\nO total de zeros eh %d", soma);

return 0;
}
*/
/*exercicio 4
int main(){

    int* p = NULL;
    int j, n = 0, x;


    while(1){
        printf("Digite um numero para o array: ");
        scanf("%d", &x);
        if(x<0)
            break;

        p = (int*) realloc(p,(n+1)*sizeof(int));
        p[n]= x;
        n++;
    }

    for(j=0;j<n;j++){
        printf("%d\n", p[j]);
    }

    free(p);
return 0;
}
*/
/*exercicio 5
struct cadastro_aluno{
    int matricula;
    char sobrenome[50];
    int ano_nasc;


};
int main(){

    int n, i;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    struct cadastro_aluno *cad = (struct cadastro_aluno*) malloc(n*sizeof(struct cadastro_aluno));

    for(i=0; i<n; i++){
        printf("Digite a matricula de um aluno: ");
        scanf("%d", &cad[i].matricula);

        printf("Digite o sobrenome de um aluno: ");
        fflush(stdin);
        gets(cad[i].sobrenome);

        printf("Digite o ano de nascimento de um aluno: ");
        scanf("%d", &cad[i].ano_nasc);
    }

    printf("\nOs dados fornecidos foram: ");

    for(i=0; i<n; i++){
        printf("\nNumero de matricula: %d", cad[i].matricula);
        printf("\nSobrenome de um aluno: %s", cad[i].sobrenome);
        printf("\nAno de nascimento: %d", cad[i].ano_nasc);
    }

    free(cad);

return 0;
}
*/
/*exercicio 6
int main()
{
    int i, j;
    int **matriz;
    int m, n;

    printf("Entre com as dimensoes da matriz: ");
    scanf("%d%d", &m, &n);

    if((matriz = (int **) malloc(m * sizeof(int *))) == NULL) {
        return -1;
    }

    printf("Digite os valores da matriz: ");

    for(i = 0; i < m; i++) {
        if((matriz[i] = (int *) malloc(n * sizeof(int))) == NULL) {
            return -1;
        }
        for(j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("[%d] ", matriz[i][j]);
        }
        printf("\n");

    }

    for(i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);
    matriz = NULL;

    return 0;
}
*/
