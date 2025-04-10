#include<stdio.h>

int main(){
    // variable declaration
    int code, item;
    // take input
    scanf("%d %d", &code, &item);
    // code validation for snack
    if(code == 1){
        printf("Total: R$ %.2lf\n", (4.00 * item));
    }else if(code == 2){
        printf("Total: R$ %.2lf\n", (4.50 * item));
    }else if(code == 3){
        printf("Total: R$ %.2lf\n", (5.00 * item));
    }else if(code == 4){
        printf("Total: R$ %.2lf\n", (2.00 * item));
    }else if(code == 5){
        printf("Total: R$ %.2lf\n", (1.50 * item));
    }
}