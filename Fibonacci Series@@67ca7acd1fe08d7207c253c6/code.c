 #include<stdio.h>
int fibonacciSeries(int n){
    if(n == 0 || n == 1){
        return n;
        }
        else{
            return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
            }
            }

int main(){
    int n;
    scanf("%d",&n);
    if (n<=0) {
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);

    return 0;
 }

    