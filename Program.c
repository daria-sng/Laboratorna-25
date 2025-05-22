#include <stdio.h>
#include <stdlib.h>
#define N 8
#define M 9

int main(){
    system ("chcp 65001");
    int *arrayA = (int*)malloc(N*sizeof(int));
    if(arrayA == NULL){
        printf("Помилка виділення пам'яті!");
        return 1;
    }

    arrayA[0] = 5;
    arrayA[1] = -1;
    arrayA[2] = 12;
    arrayA[3] = -95;
    arrayA[4] = 0;
    arrayA[5] = 42;
    arrayA[6] = 0;
    arrayA[7] = 16;

    printf("Масив А(N):\n");
    int i;
    for(i=0;i<N;i+=1){
        printf("%d ", arrayA[i]);
    }
    printf("\n");

    int *arrayB = (int*)malloc(N*sizeof(int));
    int j = 0;
    for(i=0;i<N;i+=1){
        if(arrayA[i]>M){
            arrayB[j] = arrayA[i];
            j+=1;
        }
    }

    printf("Масив B: \n");
    for(i=0;i<j;i+=1){
        printf("%d ", arrayB[i]);
    }

    free(arrayA);
    free(arrayB);
    return 0;
}