#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d",&a);
    if (a == 2){
        printf("Prime");
    }
    else if (a % 2 == 0 && a % 3 ==0){
        printf("Not Prime");
    }
    else {
        printf("Prime");
    }
    return 0;
}