#include "../inc/calculator_operations.h"
#include<math.h>
#include<stdint.h>
long int factorial(int operand){
int i,f=1;

    if(operand<0){
        printf("no factorial for negative numbers\n");
        return -1;
    }
    if (operand < 1)
    {
        return 1;
    }
    for(i=1;i<=operand;i++){
    f=f*i;
    }
    if(f<__INT_MAX__ && f>0)
        return f;
    else {
        printf("Error, Result cannot be printed");
        return -1;
    }
}

double power(double operand3, double operand4){
    double result = pow(operand3,operand4);
    return result;
}

double logarithm(double operand1){
    if(operand1<0) {
        printf("Error, number cannot be negative\n");
        return -1;
    }
    double result = log10(operand1);
    return result;
}

double exponential(double operand1){
    if(operand1>1000 || operand1<-1000){ 
        printf("Error, Result cannot be printed");
        return -1;
    }
    double result = exp(operand1);
    return result;
}