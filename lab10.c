#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*exercicio 1

int main(){

    int a;
    float b;
    char C;

    int *x;
    float *y;
    char *z;

    x = &a;
    y = &b;
    z = &C;

    printf("Digite a: ");
    scanf("%d", &a);

    printf("Digite b: ");
    scanf("%f", &b);

    printf("Digite C: ");
    fflush(stdin);
    scanf("%c", &C);

    printf("Os valores de a, b e C sao: %d %f %c", a, b, C);


    printf("\nDigite o novo valor de a: ");
    scanf("%d", x);

    printf("Digite o novo valor de b: ");
    scanf("%f", y);

    printf("Digite o novo valor de C: ");
    fflush(stdin);
    scanf("%c", z);

    printf("Os novos valores de a, b e C sao: %d %f %c", a, b, C);

return 0;
}
*/

/*exercicio 2

int main(){

    int a, b;
    int *p;

    printf("Digite um valor para A: ");
    scanf("%d", &a);

    printf("Digite um valor para B: ");
    scanf("%d", &b);

    if(&a>&b){
        p = &a;
        printf("O endereco de A eh o maior, sendo: %d", &a);
        printf("O conteudo do endereco de A eh %d", *p);
    }
    else{
        p = &b;
        printf("O endereco de B eh o maior, sendo: %d", &b);
        printf("O conteudo do endereco de B eh %d", *p);
    }



return 0;
}
*/
/*exercicio 3

int main (){
 float vet[10];
 int i, *ponteiro;
 ponteiro = &vet;

 printf("Elementos:\n");

 for(i = 0; i < 10; i++){
  printf("%f ", vet[i] = rand() %100);
 }

 printf("\nEnderecos:\n");

 for(i = 0; i < 10; i++){
     printf("%d ", ponteiro++);
 }

 return 0;
}
*/
/*exercicio 4

int main (){
 float mat[3][3];
 int i, j, *ponteiro;
 ponteiro = &mat;

 printf("Elementos:\n");

 for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        printf("%f ", mat[i][j] = rand() %100);
 }
 }

 printf("\nEnderecos:\n");

 for(i = 0; i < 3; i++){
     for(j = 0; j < 3; j++){
        printf("%d ", ponteiro++);
 }
 }

 return 0;
}
*/





