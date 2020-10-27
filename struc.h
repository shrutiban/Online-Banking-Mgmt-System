#include<stdio.h>

struct database
{
	char uname[15];
	char pass[15];
	int acc_id;
	int balance;
};

struct jointdatabase
{
	char uname1[15];
	char pass1[15];
	char uname2[15];
	char pass2[15];
	int acc_id;
	int balance;
};
struct trans // this is a log structure 
{
    char *date;
    char *time; // using clock as time stamp 
    int account;  // account Number 
    int amount;   // the transaction Amount
    char action; // D for deposit and W withdraw 
    int famount;  
};
