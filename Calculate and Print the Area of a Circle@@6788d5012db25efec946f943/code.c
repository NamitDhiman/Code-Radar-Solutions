#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float r,ar,pi=3.14;
    scanf("%f",&r);
    ar=pi*r*r;
    printf("Area: %.2f",ar);
    return 0;
}