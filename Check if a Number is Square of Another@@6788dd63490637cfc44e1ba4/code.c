#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double a,b;
    scanf("%d%d",&a,&b);
    double square = pow(a,b);
    if (a*a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}