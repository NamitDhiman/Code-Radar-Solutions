#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if (a & b >= 0 || a & b < 0 ){
        printf("Same Sign");
    }
    else if (a != b ){
        printf("Different Sign");
    }
    return 0;
}