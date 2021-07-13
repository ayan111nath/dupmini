#ifndef __CALCULATOR_OPERATIONS_
#define __CALCULATOR_OPERATIONS_

typedef struct Operands
{
    int operand1;
    int operand2;
}operands;



int add(operands* opd_add);
int subtract(operands* opd_sub);
int divide(operands* opd_div);
int multiply(operands* opd_mul);

long int factorial(int operand);
double power(double operand1,double operand2);

double logarithm(double operand1);
double exponential(double operand1);
float sin_value(float operand);
float cos_value(float operand);
float tan_value(float operand);
float cosec_value(float operand);
float sec_value(float operand);
float cot_value(float operand);
#endif