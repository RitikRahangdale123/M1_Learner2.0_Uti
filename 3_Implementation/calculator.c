/**
 * @file calculator.c
 * @author Ritik Rahangdale  ()
 * @brief Example to learn Complex numbers: Add,Subtract,Divide and Multiply
 * @version 0.1
 * @date 2022-02-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>

struct complex_number{
    int real;
    int imaginary;
};

/**
 * @brief 
 * 
 * @param in_operand1 operand1 for addition
 * @param in_operand2 operand2 for addition
 * @return struct complex_number Result of addition
 */

struct complex_number complex_add(struct complex_number in_operand1, struct complex_number in_operand2)
{
    struct complex_number temp;
    in_operand1.real+in_operand2.real;
    in_operand1.imaginary+in_operand2.imaginary;

    return temp;
}

int main()
{
    int number11,number12;

    printf("Enter two numbers");
    scanf("%d%d",&number11,&number12);

    struct complex_number cn1={number11,number12};

    int number21,number22;

    printf("Enter two numbers");
    scanf("%d%d",&number21,&number22);

    struct complex_number cn2={number21,number22};
    struct complex_number result=complex_add(cn1,cn2);

    printf("Sum of two complex number is= %d + i %d",result.real,result.imaginary);

    return 0;
}

/*
1)Preprocessing
    * Tool : cpp
    * Input is .c file
    * Remove comments
    * Substitute the content of header file
    * Preprocessor will be substituted in its place
        * #define
        * #include
        * #if
        * #else
        * #endif
    * Generate a pure C code
    * gcc -E <filename>
    * Output is .i 
2)Compilation
    * Tool : gcc
    * Checks
    *   * Syntax check
    *   * Variable mapping
    *   * Semantics
    *       * A=10+20 ==> 10=A+20;
    * If all checks pass
    *   * Then it generates assembly code  - opcodes
    * gcc -S <filenames> orgcc -S <i source filenemae>
3)Assembling
    * Tool : as
    * Convert assembly code to machine code - object code
    * gcc -c <c source file> or as <assembly source file>
4)Linking
    * Tool : ld
    * Address of external function (library,or other object files) is linked
    * Run time
    * Compile time
    * 
* Commands
    * check libraries - ldd a.out
    * compilation : gcc <fileneame> -o <own name>.out
    *   * .exe - Windows
    *   * .out - Linux
    * Symbol Table -nm <.o> or nm a.out
    * Size of segments - size a.out

*/