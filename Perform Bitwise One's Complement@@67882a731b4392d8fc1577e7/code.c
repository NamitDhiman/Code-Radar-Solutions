#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d%d",&a,&b);
    c = ~a;
    printf("%d",c);
    return 0;
}