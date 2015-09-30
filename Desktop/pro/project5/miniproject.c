/*A miniproject on hospital management system*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"pro.h"


void start()
	{
		char choice;
		printf("\n\t\t\t\t***WELCOME TO THE HOSPITAL MANAGEMENT SYSTEM***\t\t\t\t\n");
		printf("1.Patient\n");
		printf("2.Staff\n");
		printf("3.Expense\n");
		printf("4.Change the user mode\n");
		printf("0.Exit");
		printf("\n\nEnter your choice:");
		scanf("%c", &choice);
		
		switch(choice)
			{
				case 1:
					patient();
					break;
				case 2:
					
					staff();
					break;
				case 3:
					exp();
					break;
				case 4:
					verification();
					break;
				case 0:
					exit(1);
		}

}

void verification(){

	char userp[] = {"passuser"};
	char adminp[] = {"passadmin"};
	char u[20];
	char a[20];
	int uchoice;
	int ucheck;
	printf("\nEnter choice\n 1 - Administrator\n 2 - User\n");
	scanf("%d" , &uchoice);
	if(uchoice == 1)		
		{
			printf("\nPlease enter the password\n");
			scanf("%s" , a);
			ucheck = strcmp(a , adminp);
			if(ucheck == 0)
				{
					printf("Welcome administrator\n");
					start();
				}
			else
				{
					printf("\nEntered password is wrong.Try again\n");
					printf("\nPlease ensure that selected mode is correct\n");
					verification();
				}
		}
	if(uchoice == 2)
		{
			printf("\nPlease enter the password\n");
			scanf("%s" , u);
			ucheck = strcmp(u , userp);
			if(ucheck == 0)
				{
					printf("Welcome user\n");
					start();
				}
			else
				{
					printf("\nEntered password is wrong.Try again\n");
					printf("\nPlease ensure that selected mode is correct\n");
					verification();
				}
		}
}


void patient(){

		FILE *fp;
		char ch , c;
		int data;
		pat p;
		fp = fopen("patdata" , "r+");
		if(fp == NULL)
			{
				fp = fopen("patdata" , "w+");
					if(fp == NULL)
						{
							printf("Sorry!Cannot open file.");
							exit(1);
						}
			}
		while(1)
			{
				printf("\n\t\t\t\tPatient\n");
				printf("\t\t1.Enter new entry\n");
				printf("\t\t2.Edit existing record\n");
				printf("\t\t3.Search an entry\n");
				printf("\t\t4.Give list of the records\n");
				printf("\t\t5.Delete an entry\n");
				printf("\t\t6.Take me back to start menu\n");
				printf("\t\t\tEnter your choice here:\n");
			}	
				
}	

void staff(){
	return;
}

void exp(){
	return;
}
