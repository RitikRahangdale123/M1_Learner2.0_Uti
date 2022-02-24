#include "calculator.h"


/**
 * @brief Division two complex number
 * 
 * @param in_operand1 operand1 for Division
 * @param in_operand2 operand2 for Division
 * @return struct complex_number Result of Division
 */

enum status complex_divide(struct complex_number in_operand1, struct complex_number in_operand2,struct complex_number* out_result_divide)
{
    
    // write logic for division

    /*
        A=10
        B=0
        A/B-->Crash the program
    */
    if(0==in_operand1.imaginary || 0==in_operand2.imaginary)
        return error_divide_by_zero;

    out_result.real=1;
    out_result.real=2;

    return success;

}