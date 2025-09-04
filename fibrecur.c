//Code to Print nth fibonacci element
#include <stdio.h>
int fib(int n);

int main(){
    int num;
    printf("Enter number nth fibonacci element");
    scanf("%d", &num);
    int res;
    res=fib(num);
    printf("%dth fibonacci elemnt is %d",num,res);
    return 0;
}

int fib(int n){
    if (n==1){
        return 0;}
    else if (n==2){
        return 1;}
    else {
    return fib(n-1)+fib(n-2);}

}
