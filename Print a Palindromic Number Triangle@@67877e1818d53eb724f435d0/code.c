#include <stdio.h>
int main() {
    int N,space,nsp =(N-1);
    scanf("%d",&N);
    for (int i = 1; i <= N ; i++){
        int a = i - 1;
        for (space = 1; space <= nsp; space++){
            printf(" ");
            
        }nsp--;
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