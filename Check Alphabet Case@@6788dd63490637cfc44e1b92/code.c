#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    char ch;
    scanf("%d",%ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("Uppercase");
    }else if (ch >= 'a' && ch <='z'){
        printf("Lowercase");
    }
    return 0;
}