#include <stdio.h>
#define D 3
#define E 3


void matrix_MULTI(int A[D], int B[D][E], int C[D][E]);

int A[D];

int B[D][E];  
                   
int C[D][E];

int Y[D];

int main(){

    printf("1st Matrix:\n");

    for(int i=0; i<D; i++){ 
            printf("Enter number for A[%d]: ", i);
            scanf("%d", &A[i]);   
    }

    

    printf("\n2nd Matrix:\n");
     for(int i=0; i<D; i++){
        for(int j=0; j<E; j++){  
            printf("Enter number for B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }  
    }

    printf("\n1st Array:\n");
    for(int i=0; i<D; i++){
            printf("%4d ", A[i]);
    }

     printf("\n\n2nd Array:\n");
    for(int i=0; i<D; i++){
        for(int j=0; j<E; j++){  
            printf("%4d ", B[i][j]);
        }  
        printf("\n");
    }

    printf("\n3rd Matrix:\n");
    matrix_MULTI(A,B,C);

    for(int i=0; i<D; i++){
        for(int j=0; j<E; j++){
        printf("%4d ", C[i][j]); 
        }
        printf("\n");
    }

    printf("Final Array\n");
        for(int i=0; i<D; i++){
        printf("\nY[%d]: %4d ", i, Y[i]); 
        }
       
    return 0;
}

void matrix_MULTI(int A[D], int B[D][E], int C[D][E]){
    for(int i=0; i<D;i++){
        for(int j=0; j<E; j++){
            C[i][j] = A[i] * B[i][j];
            Y[i]+=C[i][j];
        }
    }
}