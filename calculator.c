#include<stdio.h>
#include <stdbool.h>
#include<math.h>

int main(){

    printf("Simple Calculator\n");
    printf("-----------------\n");
    
    int number;
    bool menuScreen=false;
    
    do{
        menuScreen=true;
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Square root\n");
        printf("(Enter 0 to exit the program.)\n");
        printf("Enter number: \n");
        scanf("%d", &number);

        if(number>=1 && number<=6){
            switch (number)
            {
            case 1:
                printf("You have selected Addition\n");
                double a,b;
                double sum=0;
                printf("Enter the first numbers: \n");
                scanf("%lf", &a);
                printf("Enter the second number: \n");
                scanf("%lf", &b);
                sum = a + b;
                printf("Addition of the two numbers are: %lf \n", sum);
                printf("-----------------\n");           
                break;
            case 2:
                printf("You have selected Subtraction\n");
                double subtraction=0;
                printf("Enter the first number: \n");
                scanf("%lf", &a);
                printf("Enter the second number: \n");
                scanf("%lf", &b);
                subtraction = a - b;
                printf("Subtraction of the two numbers are: %lf \n", subtraction);
                printf("-----------------\n");                
                break;
            case 3:
                printf("You have selected Multiplication\n");
                double multiplication=0;
                printf("Enter the first number: \n");
                scanf("%lf", &a);
                printf("Enter the second number: \n");
                scanf("%lf", &b);
                multiplication = a * b;
                printf("Multiplication of the two numbers are: %lf \n", multiplication);
                printf("-----------------\n");
                break;
            case 4:
                printf("You have selected Division\n");
                double division=0;
                printf("Enter the first number: \n");
                scanf("%lf", &a);
                printf("Enter the second number: \n");
                scanf("%lf", &b);
                division= a / b;
                printf("Division of the two numbers are: %lf \n", division);
                printf("-----------------\n"); 
            case 5:
                printf("You have selected square root");
                double squareroot=0;
                printf("Enter the number: \n");
                scanf("%lf", &a);
                squareroot= sqrt(a);
                printf("square root of the number is: %.2lf \n", squareroot);
                printf("-----------------\n"); 

            default:
                break;
            }
        }else if(number == 0){
            printf("Thank you for using this application.\n");
            menuScreen=false;
        }else{
            printf("Enter a valid Number\n");
        }

    }while (menuScreen);  
    
    return 0;
}