#include <stdio.h>
int main() {
    int N,space;
    scanf("%d",&N);
    for (int i = N; i <= 1 ; i++){
        for (space = 1; space <= (N - i); space++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}