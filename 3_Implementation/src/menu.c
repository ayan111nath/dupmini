#include<stdio.h>
#include<stdlib.h>
#include "../inc/menu.h"
#include "../inc/calculator_operations.h"


enum basic_operations{ ADD=1,SUBTRACT,MULTIPLY,DIVIDE,MAIN_MENU,EXIT };
enum Other_operations{FACTORIAL=1,POWER,LOGARITHM,EXPONENTIAL,MAINMENU,EXIT_1};
enum Scientific_operations{SIN=1,COS,TAN,COSEC,SEC,COT,MAINMENU2,EXIT_2};
void fundamental_operations(int option){
    static operands all = {0, 0};
switch(option){
    case ADD:
        printf("Enter the first operand and the second operand seperated by a space to perform the addition operation\n");
        scanf("%d %d", &all.operand1, &all.operand2);
        printf("The result is %d\n", add(&all));
        break;
    
    case SUBTRACT:
        printf("Enter the first operand and the second operand seperated by a space to perform the subtraction operation\n");
        scanf("%d %d", &all.operand1, &all.operand2);
        printf("The result is %d\n", subtract(&all));
        break;
    
    case MULTIPLY:
        printf("Enter the first operand and the second operand seperated by a space to perform the multiplication operation\n");
        scanf("%d %d", &all.operand1, &all.operand2);
        printf("The result is %d\n", multiply(&all));
        break;
    
    case DIVIDE:
        printf("Enter the first operand and the second operand seperated by a space to perform the division operation\n");
        scanf("%d %d", &all.operand1, &all.operand2);
        printf("The result is %d\n", divide(&all));
        break;
    
    case MAIN_MENU:
        printf("\nReturning to the main menu!!\n");
        main_menu(); 
        break;

    case EXIT:
        printf("\nThank You, I hope I was usefull!!\n");
        exit(0);
        
    
    default:
        printf("\nEnter the valid option\nreturning to main menu..........\n");
        
    
}
}

void other_operations(int option){
    int operand;
    double operand1,operand2;
switch(option){
    case FACTORIAL:
        printf("Enter the first operand and the second operand seperated by a space to perform the addition operation\n");
        
        scanf("%d", &operand);
        printf("The factorial of %d is %ld\n", operand,factorial(operand));
        break;
    
    case POWER:
            printf("Enter the numbers for power function\n");
            scanf("%lf %lf", &operand1, &operand2);
            printf("The value is %.1lf for %.1lf to the power of %.1lf\n", power(operand1, operand2), operand1, operand2);
            break;
    case LOGARITHM:
            printf("Enter the number for logarithm function of base 10\n");
            scanf("%lf", &operand1);
            printf("The log of %.1lf to the base 10 is %.1lf\n", operand1, logarithm(operand1));
            break;
    case EXPONENTIAL:
            printf("Enter the number for exponential function\n");
            scanf("%lf", &operand1);
            printf("The exponential of %.1lf is %.1lf\n", operand1, exponential(operand1));
            break;
    case MAINMENU:
        printf("\nReturning to the main menu!!\n");
        main_menu(); 
        break;

    case EXIT_1:
        printf("\nThank You, I hope I was usefull!!\n");
        exit(0);
        
    
    default:
        printf("\nEnter the valid option\nreturning to main menu..........\n");

    
}
}



void trignometric_operations(int option){
   float degree, radian;  
    const float PI = 3.14159;

switch(option){
    case SIN:
        printf("Enter angle in degree\n"); 
        scanf("%f", &degree);
        radian = degree * (PI / 180.0);  
        printf("The result is %f\n", sin_value(radian));
        break;
 
    case COS:
            printf("Enter angle in degree\n"); 
            scanf("%f", &degree);
            radian = degree * (PI / 180.0);  
            printf("The result is %f\n", cos_value(radian));
            break;
    case TAN:
            printf("Enter angle in degree\n"); 
            scanf("%f", &degree);
            radian = degree * (PI / 180.0);  
            printf("The result is %f\n", tan_value(radian));
            break;
    case COSEC:
            printf("Enter angle in degree\n"); 
            scanf("%f", &degree);
            radian = degree * (PI / 180.0);  
            printf("The result is %f\n", cosec_value(radian));
            break;
    
    case SEC:
            printf("Enter angle in degree\n");
            scanf("%f", &degree); 
            radian = degree * (PI / 180.0);  
            printf("The result is %f\n", sec_value(radian));
            break;
    case COT:
            printf("Enter angle in degree\n"); 
            scanf("%f", &degree);
            radian = degree * (PI / 180.0);  
            printf("The result is %f\n", cot_value(radian));
            break;
    
    case MAINMENU2:
        printf("\nReturning to the main menu!!\n");
        main_menu(); 
        break;

    case EXIT_2:
        printf("\nThank You, I hope I was usefull!!\n");
        exit(0);
        
    
    default:
        printf("\nEnter the valid option\nreturning to main menu..........\n");

    
}
}



void main_menu(void){
   
    printf("\nMain Menu\n");
    printf("\n1. Basic Operations\n2. Trignometric Operations\n3. Other Operations\n4. Exit");
    printf("\n\tEnter your choice\n");
    int calculator_operation_mode,calculator_operation;
    scanf("%d", &calculator_operation_mode);

    switch(calculator_operation_mode)
    {
    case 1:
        
        printf("\nAvailable Basic Operations\n");
        printf("\n1. Addition\n2. Subtarction\n3. Multiplication\n4. Division\n5. Main Menu\n6. EXIT");
        printf("\n\tEnter your choice\n");
   
        scanf("%d", &calculator_operation);
        fundamental_operations(calculator_operation);
        break;
    case 2:
        printf("\n\t---Welcome to scientific Operations---\n");
        printf("\nAvailable Trignometric Operations\n");
        printf("\n1. Sin\n2. Cos\n3. Tan\n4. Cosec\n5. Sec\n6. Cot\n7. Main Menu\n8. EXIT");
        printf("\n\tEnter your choice\n");
        scanf("%d", &calculator_operation);
        trignometric_operations(calculator_operation);
        break;
    case 3:
        printf("\nAvailable Other Operations\n");
        printf("\n1. Factorial\n2. Power\n3. Logarithm\n4. exponential\n5. Main Menu\n6. EXIT");
        printf("\n\tEnter your choice\n");

        scanf("%d", &calculator_operation);
        other_operations(calculator_operation);
        break;
    case 4:
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    default:
        printf("\n\t---Enter the valid operation mode---\n");
    }
}
