#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int sp,bp;
    scanf("%d %d",&sp,&bp);
    if (sp>bp){
        printf("Profit");
    }
    else if (sp<bp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}