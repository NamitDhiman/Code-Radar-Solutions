#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for (int i = 1; i <= 1 ; i++){
        for (int space = 1; space <= (N-i); space++){
            printf(" ");   
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = N; i >= 1 ; i--){
        for (int space = 1; space <= (N-i); space++){
            printf(" ");   
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}