#pragma once
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

void welcome();
void thanks();
int verify_password();
void assign_user();

struct administrator
{
	char user_name[10];
	char password[10];
};

struct Global
{
	char name[50];
	char DOB[10];
    char std[20], sec;
    char rno[10];
	char phone[10];
	char ID[12];
	char fname[50];
	char mname[50];
	char addr1[50];
	char addr2[50];
	char city[25];
	char state[25];
	char pin[6];

	void student();
	void marks();
	void result();
	void exam();
};

struct student
{
	int load();
	void add_rec();
	void show_rec();
	void mod_rec();
	void del_rec();
};
namespace
{
	FILE *fp, *ft;
	char another, choice, ch;
	char xrno[10];
	long int recsize;
	
	struct student stu;
	struct Global e;
	struct administrator admin;


}
