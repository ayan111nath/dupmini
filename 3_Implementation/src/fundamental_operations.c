#include "../inc/calculator_operations.h"
int add(operands* opd_add){
    return (opd_add->operand1 + opd_add->operand2);
}

int divide(operands* opd_div){
    return (opd_div->operand1 / opd_div->operand2);
}


int multiply(operands* opd_mul){
    return (opd_mul->operand1 * opd_mul->operand2);
}


int subtract(operands* opd_sub){
    return (opd_sub->operand1 - opd_sub->operand2);
}