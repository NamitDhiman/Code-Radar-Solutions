#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (a*a){
        printf("Yes");
    }
    else if (a){
        printf("No");
    }
    return 0;
}