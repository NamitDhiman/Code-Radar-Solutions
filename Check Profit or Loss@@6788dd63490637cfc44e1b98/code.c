#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int bp,sp;
    scanf("%d %d",&sp,&bp);
    if (bp>sp){
        printf("Profit");
    }
    else if (bp<sp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}