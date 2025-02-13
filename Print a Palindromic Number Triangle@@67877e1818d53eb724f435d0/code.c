#include <stdio.h>
int main() {
    int N,space;
    scanf("%d",&N);
    for (int i = 1; i <= N ; i++){
        int a = i - 1;
        for (space = 1; space <= (N - 1); space++){
            printf(" ");
            
        }
        for (int j = 1; j <= i; j++) {
            printf("%d",j);
        }for (int k =1 ; k <= i ; k++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    return 0;
}