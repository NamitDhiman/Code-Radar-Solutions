#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c,maximum;
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c){
        printf("%d",a);
    }else if (b>a && b>c){
        printf("%d",b);
    }else if (c>a && c>b){
        printf("%d",c);
    }
    return 0;
}