#include<stdio.h>

int main()
{
    int n,a,arm=0,b;
    printf("Enter any Number: ");
    scanf("%d",&n);
    b=n;
    while(n>0)
    {
        a=n%10;
        arm=(a*a*a)+arm;
        n=n/10;
    }
    if(b==arm)
    printf("Armstrong number/n./Armout");
    else
    printf("Not an Armstrong number");
    return 0;
}