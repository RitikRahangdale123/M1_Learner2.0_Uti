#include<stdio.h>

int main()
{
 int number,digit,largest_num=0,smallest_num=9;

    printf("Enter any number:\n");
    scanf("%d",&number);

    while(number>0)
    {
        digit=number%10;
        
        if(digit<smallest_num)
            smallest_num=digit;
            number=number/10;

    }
    printf("smallest number is=%d\n",smallest_num);


    return 0;
}