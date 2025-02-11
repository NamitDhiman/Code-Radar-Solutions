#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int N;
    for (int i = 1; i<=N ; i++){
        printf("* %d\n",N,i*N);
    }
    return 0;
}