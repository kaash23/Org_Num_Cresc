#include <stdio.h>


void Ordena (int vet[]){
     int aux;
      for (int i = 10; i >= 0; i--){
        for (int j = 1; j <= i; j++){
            if (vet[j] < vet[j-1]){
                aux = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = aux;

            }
        }

    }
}


int main(){
    int vet[10], aux, i;
    int* p;
    p = &i;



    for (int i = 0; i < 10; i++){
    printf("Insira um numero: ");
    scanf("%d", &vet[i] );
    }

    printf("\n Numeros inseridos....\n");
    for (int i = 0;i < 10; i++){
        printf("Numero %d: %d \n", i+1, vet[i]);
    }

    Ordena(vet);

    printf("\nNumeros ordenados por ordem crescente....\n");

       for (i = 0;i < 10; i++){
        printf("Numero %d: %d \n", *p+1, vet[i]);
    }


}





