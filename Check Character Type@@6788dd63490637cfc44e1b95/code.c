#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char c;
    int x;
    scanf("%c",&c);
    
    if (c=='a', c=='e', c=='i', c=='o', c=='u' || c=='A', c=='E', c=='I', c=='O', c=='U'){
        printf("Vowel");
    }
    else {
        printf("Consonant");
    }

{
    x = int(c);
    else if (isdigit(c)){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
}
    return 0;
}