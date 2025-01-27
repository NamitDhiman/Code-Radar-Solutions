#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a,b,prdt;
    scanf("%f%f",&a,&b);
    prdt= a*b;
    printf("Product: %.2f",prdt);
    return 0;
}