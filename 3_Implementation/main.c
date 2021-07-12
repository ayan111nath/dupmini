#include<stdio.h>
#include<stdlib.h>
#include "inc/calculator_operations.h"
#include "inc/menu.h"
#include "src/fundamental_operations.c"
#include "src/menu.c"
/*enum operations{ ADD=1,SUBTRACT,MULTIPLY,DIVIDE,EXIT };
void fundamental_operations(int option){
    static operands all = {0, 0};
switch(option){
    case ADD:
        printf("Enter the first operand and the second operand seperated by a space to perform the addition operation\n");
        scanf("%d %d", &all.operand1, &all.operand2);
        printf("The addition is %d\n", add(&all));
        break;
    
    case SUBTRACT:
        printf("Enter the first operand and the second operand seperated by a space to perform the subtraction operation\n");
        scanf("%d %d", &all.operand1, &all.operand2);
        printf("The addition is %d\n", subtract(&all));
        break;
    
    case MULTIPLY:
       printf("Enter the first operand and the second operand seperated by a space to perform the multiplication operation\n");
        scanf("%d %d", &all.operand1, &all.operand2);
        printf("The addition is %d\n", multiply(&all));
        break;
    
    case DIVIDE:
       printf("Enter the first operand and the second operand seperated by a space to perform the division operation\n");
        scanf("%d %d", &all.operand1, &all.operand2);
        printf("The addition is %d\n", divide(&all));
        break;
    

    case EXIT:
        printf("\nThank you!!\n");
        exit(0); 
    
    default:
        printf("\nEnter the valid option\n");
    
}
}*/








int main(){
    while(1){
         main_menu();
    }
}