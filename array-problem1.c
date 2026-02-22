#include<stdio.h>

int A[5], B[5], merged[10];
int count;

int MERGE(int A[], int B[], int merged[]); 

int main(){

    printf("Enter 5 values for Array A:\n");
    for(int i = 0; i < 5; i++){
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("Enter 5 values for Array B:\n");
    for(int i = 0; i < 5; i++){
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    count = MERGE(A, B, merged); 
    printf("Merged Array:\n");
    for(int i = 0; i < count; i++){
        printf("%d ", merged[i]);
    }

    return 0;
}

int MERGE(int A[], int B[], int merged[]){
    int count = 0; 
    for(int i = 0; i < 5; i++){
        merged[count] = A[i];
        count++;
    }

    for(int i = 0; i < 5; i++){
        int found = 0;

        for(int j = 0; j < count; j++){
            if(B[i] == merged[j]){
                found = 1;
                break;
            }
        }
        if(found == 0){
            merged[count] = B[i];
            count++;
        }
    }

    return count;
}