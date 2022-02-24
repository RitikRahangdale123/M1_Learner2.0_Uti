#include "calculator.h"


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

    enum status operation_divide_status=complex_divide(cn1,cn2,result);
    printf("Division of two numbers,status=%d\r",operation_divide_status);
    printf("Division of two complex number is= %d + i %d",result.real,result.imaginary);

    return 0;
}

