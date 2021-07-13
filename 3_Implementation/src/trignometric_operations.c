#include "../inc/calculator_operations.h"
#include<math.h>
#include<stdio.h>

 
float sin_value(float operand_in_radian){
    float result = sin(operand_in_radian);
    return result;
}

float cos_value(float operand_in_radian){
    float result = cos(operand_in_radian);
    return result;
}

float tan_value(float operand_in_radian){
    float result = tan(operand_in_radian);
    return result;
}

float cosec_value(float operand_in_radian){
    float result = 1/sin(operand_in_radian);
    return result;
}

float sec_value(float operand_in_radian){
    float result = 1/cos(operand_in_radian);
    return result;
}

float cot_value(float operand_in_radian){
    float result = 1/tan(operand_in_radian);
    return result;
}