#include <stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    for (int i = N; i <= N ; i++){
        for (int j = 1; j <= N; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}