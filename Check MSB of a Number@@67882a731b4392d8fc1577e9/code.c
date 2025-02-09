#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    unsigned int num:
    scanf("%d",&num);
    if (num & (1<<31)){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}