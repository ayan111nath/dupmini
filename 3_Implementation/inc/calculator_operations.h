#ifndef __CALCULATOR_OPERATIONS_
#define __CALCULATOR_OPERATIONS_

typedef struct Operands
{
    int operand1;
    int operand2;
}operands;

//ff

int add(operands* opd_add);
int subtract(operands* opd_sub);
int divide(operands* opd_div);
int multiply(operands* opd_mul);

#endif