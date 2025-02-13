#include <stdio.h>
int main() {
    int N,space;
    scanf("%d",&N);
    for (int i = 1; i <= N ; i++){
        int a = i - 1;
        for (space = 1; space <= (N - i); space++){
            printf(" ");
        }(N - 1)--;
        for (int j = 1; j <= (2*i - 1); j++) {
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}