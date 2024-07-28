#include<stdio.h>
#include <stdbool.h>
#include<math.h>
double additionOfTwoNumbers(){
    double a,b;
    printf("You have selected Addition\n");
    printf("Enter the first numbers: \n");
    scanf("%lf", &a);
    printf("Enter the second number: \n");
    scanf("%lf", &b);
    double sum =0;
    sum=a+b;
    return sum;
}
double subtractionoftwonumbers(){
    double a,b;
    printf("You have selected Subtraction\n");
    printf("Enter the first number: \n");
    scanf("%lf", &a);
    printf("Enter the second number: \n");
    scanf("%lf", &b);    
    double subtraction = 0;
    subtraction=a-b;
    return subtraction;
}
double multiplicationoftwonumbers(){
    double a,b;
    printf("You have selected Multiplication\n");
    printf("Enter the first number: \n");
    scanf("%lf", &a);
    printf("Enter the second number: \n");
    scanf("%lf", &b);
    double multiplication = 0;
    multiplication= a*b;
    return multiplication;
}
double divisionoftwonumbers(){
    double a,b;
    printf("You have selected Division\n");
    printf("Enter the first number: \n");
    scanf("%lf", &a);
    printf("Enter the second number: \n");
    scanf("%lf", &b);
    double division=0;
    division = a/b;
    return division;

}
double squarerootoftwonumbers(){
    double a;
    printf("You have selected square root\n");
    printf("Enter the number: \n");
    scanf("%lf", &a);
    double squareroot=0;
    squareroot=sqrt(a);
    return squareroot;
}


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
                double sum = additionOfTwoNumbers();
                printf("Addition of the two numbers are: %lf \n", sum);
                printf("-----------------\n");           
                break;
            case 2:
                
                double subtraction = subtractionoftwonumbers();
                printf("Subtraction of the two numbers are: %lf \n", subtraction);
                printf("-----------------\n");                
                break;
            case 3:
                
                double multiplication = multiplicationoftwonumbers();
                printf("Multiplication of the two numbers are: %lf \n", multiplication);
                printf("-----------------\n");
                break;
            case 4:
               
                double division= divisionoftwonumbers();
                printf("Division of the two numbers are: %lf \n", division);
                printf("-----------------\n"); 
            case 5:
                
                double squareroot= squarerootoftwonumbers();
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