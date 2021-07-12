#include<stdio.h>
#include<stdlib.h>
#include "../inc/menu.h"
#include "../inc/calculator_operations.h"


enum operations{ ADD=1,SUBTRACT,MULTIPLY,DIVIDE,EXIT };
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
    

    case EXIT:
        printf("\nThank you!!\n");
        exit(0); 
    
    default:
        printf("\nEnter the valid option\n");
    
}
}

void main_menu(void){
   
    printf("\nAvailable Mode of Operations\n");
    printf("\n1. Basic Operations\n2. Financial Operations\n3. Other Operations\n4. Exit");
    printf("\n\tEnter your choice\n");
    int calculator_operation_mode,calculator_operation;
    scanf("%d", &calculator_operation_mode);

    switch(calculator_operation_mode)
    {
    case 1:
        printf("\n\t---Welcome to Basic Operations---\n");
        printf("\nAvailable Basic Operations\n");
        printf("\n1. Addition\n2. Subtarction\n3. Multiplication\n4. Division\n5. Exit");
        printf("\n\tEnter your choice\n");
   
        scanf("%d", &calculator_operation);
        fundamental_operations(calculator_operation);
        break;
    
    case 2:
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    default:
        printf("\n\t---Enter the valid operation mode---\n");
    }
}
