#include <stdio.h>
int main() {
    int N,space;
    scanf("%d",&N);
    for (int i = 1; i <= N ; i++){
        for (space = 1; space <= (N - i); space++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}