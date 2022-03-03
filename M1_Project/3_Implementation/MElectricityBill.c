#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include "MElectricityBill.h"
#include "Electricbill.h"
void Urban_Area();
void Rural_area();
void main()
{ 
	details();
	int option;
	do
	{
		printf("****Electricity Bill****\n");
		printf("Please enter your choice from below (1-2):\n");
		printf("1. Urban_Area\n");
		printf("2. Rural_Area\n");
		printf("3. EXIT\n");
		printf("Electricity Board Helpline: 8435 2340\n");
		printf("Enter your choice :\n");
		scanf("%d", &option);
		system("cls");
		switch (option)
		{
		case 1:
			Urban_area();
			break;
		case 2:
			Rural_area();
			break;
		default:
			printf("INVALID CHOICE!\n");
			printf("PLEASE SELECT CASE 1 or 2\n");
		}
		getch();
	} while (option != 3);
}