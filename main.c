#include <stdio.h>
#include <stdlib.h>

void generate_finobacci(int *arr, int n){
    if(n > 0)arr[0];
    if(n > 1)arr[1];
    for (int i = 2; i < n; i++) {
        arr [i] = arr[i - 1] + arr [i - 2];
    }

}

void print_finobacci_triangle(int *arr, int n){
    for (int i = 1;i<=n; i++){
        for (int j = 0; j < i; j++){
            printf("%d",arr[j]);
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("digite o numero de linhas do triangulo: ");
    scanf("%d",&n);

    int *finobacci = (int*)malloc(n * sizeof(int));
    if(finobacci == NULL){
        printf("erro ao alocar memoria.\n");
    }
}
