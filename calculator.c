#include<stdio.h>
#include <stdbool.h>

int main(){

    printf("Simple Calculator\n");
    printf("-----------------\n");
    
    int calculate,number;
    bool menuScreen=false;
    
    do{
        menuScreen=true;
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("(Enter 5 to exit the program.)\n");
        printf("Enter number: \n");
        scanf("%d", &number);

        if(number>=1 && number<5){
            switch (number)
            {
            case 1:
                printf("You have selected Addition\n");
                int a,b;
                int sum=0;
                printf("Enter the first numbers: \n");
                scanf("%d", &a);
                printf("Enter the second number: \n");
                scanf("%d", &b);
                sum = a + b;
                printf("Addition of the two numbers are: %d \n", sum);
                printf("-----------------\n");           
                break;
            case 2:
                printf("You have selected Subtraction\n");
                int a,b;
                int subtraction=0;
            
                break;
            case 3:
                printf("You have selected Multiplication\n");
                break;
            case 4:
                printf("You have selected Division\n");
            default:
                break;
            }
        }else if(number == 5){
            printf("Thank you for using this application.\n");
            menuScreen=false;
        }else{
            printf("Enter a valid Number\n");
        }

    }while (menuScreen);  
    
    return 0;
}