#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<Windows.h>
#include"MElectricityBill.h"

void details()
{
    printf("Enter your  Address:\n");
	scanf("%s", B.area);
	printf("Enter your  name:\n");
	scanf("%s", B.name);
	printf("Enter your Meter Number:\n");
	scanf("%d", &B.meternumber);
    printf("Enter units consumed:\n");
	scanf("%d", &B.unitsconsumed);
    printf("Enter your email ID :\n");
    scanf("%s", B.email);
    printf("Enter the permanent address :\n");
    scanf("%s", B.address);
    printf("Enter the phone number : \n");
    scanf("%s", B.phonenumber);
}

void Urban_Area()
{
    int amount=0;
    
    B.unitsconsumed;
    switch(amount){
        case B.unitsconsumed <=30 && B.unitsconsumed >= 0:
        {
            amount = B.unitsconsumed * 3.25; //3.25 is rupees
        }
        case B.unitsconsumed >= 31 && B.unitsconsumed <= 100:
        {
            amount = B.unitsconsumed * 4.70;
        }
        case B.unitsconsumed >= 101 && B.unitsconsumed <= 200:
        {
            amount = B.unitsconsumed * 6.25;
        }
        default:
            amount = B.unitsconsumed * 7.30;

    }
  
    
   
        
    }

    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
}

void Rural_Area()
{
    int amount=0;
    B.unitsconsumed;
    switch(amount)
    {
        case B.unitsconsumed <=30 && B.unitsconsumed >= 0:
        {
            amount = B.unitsconsumed * 3.15;
        }
        case B.unitsconsumed >= 31 && B.unitsconsumed <= 100:
        {
            amount = B.unitsconsumed * 4.40;
        }
        case B.unitsconsumed >= 101 && B.unitsconsumed <= 200:
        {
            amount = B.unitsconsumed * 5.95;
        }
        default:
            amount = B.unitsconsumed * 6.80;
    }
    
 
    printf("****Electricity Bill****\n\n");
    printf("Name : %s\n", B.name);
    printf("In Urban, your electricity bill is: %d\n", amount);
    printf("Units you consumed per month: %d\n", B.unitsconsumed);
}