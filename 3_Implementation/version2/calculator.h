

/**
 * @file calculator.h
 * @author Ritik Rahangdale (ritikrahangdale633@gmail.com)
 * @brief Example to learn Complex numbers: Add,Subtract,Divide and Multiply
 * @version 0.1
 * @date 2022-02-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef CALCULATOR_H_

#define CALCULATOR_H_

#include<stdio.h>

struct complex_number{
    int real;
    int imaginary;
};

enum status{
error_divide_by_zero,
success
};
// Function prototypes

/**
 * @brief Add two complex number
 * 
 * @param in_operand1 operand1 for addition
 * @param in_operand2 operand2 for addition
 * @return struct complex_number Result of addition
 */

enum status complex_add(struct complex_number in_operand1, struct complex_number in_operand2);

/**
 * @brief Subtract two complex number
 * 
 * @param in_operand1 operand1 for Subtraction
 * @param in_operand2 operand2 for Subtraction
 * @return struct complex_number Result of Subtraction
 */

enum status complex_subtract(struct complex_number in_operand1, struct complex_number in_operand2);

/**
 * @brief Multiply two complex number
 * 
 * @param in_operand1 operand1 for Multiplication
 * @param in_operand2 operand2 for Multiplication
 * @return struct complex_number Result of Multiplication
 */

enum status complex_multiply(struct complex_number in_operand1, struct complex_number in_operand2);

/**
 * @brief Division two complex number
 * 
 * @param in_operand1 operand1 for Division
 * @param in_operand2 operand2 for Division
 * @return struct complex_number Result of Division
 */

enum status complex_divide(struct complex_number in_operand1, struct complex_number in_operand2,struct complex_number* out_result_divide)

#endif