#include<stdio.h>
int main(){

    printf("Simple Calculator\n");
    printf("-----------------\n");
    
    int a,b,calculate,number;
    
    do{
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Return to Menu\n");
        printf("Enter number: \n");
        scanf("%d", &number);

        if(number >=1 && number <= 5){

            printf("Enter the first number: \n");
            scanf("%d", a);
            printf("Enter the second number: \n");
            scanf("%d", b);

    }
   

    } while (number = 5);
    
    

    



    
    
    return 0;
}