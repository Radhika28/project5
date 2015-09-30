void start();				/*Function declaration*/
void patient();
void staff();
void exp();
void verification();

typedef struct info {				/*Hospital information*/
	int hospno;
	char city[20];
	char address[40];
}info;

typedef struct patient {			/*Patient information*/
	char name[20];
	char p_id[20];
	char address[40];
	char city[40];
	char state[40];
	int age;
	char gender[10];
	char bldgrp[5];
	char mobno[20];
	char occupation[50];
	char date[10];
	char history[200];
	char disease[50];
	char doctorname[20];
	char treatment[100];
	char med[50];
}pat;

typedef struct staff {				/*Staff information*/
	
	char name[20];
	char s_id[20];
	char address[40];
	char city[40];
	char state[40];
	int age;
	char mobno[20];
	char gender[10];
	char id[10];
	char qualif[50];
	double salary;
}staf;

typedef struct expense {			/*Manipulating expenditure*/

	int days;
	char name[20];
	float price;
	float amount;
}expense;

