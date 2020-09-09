#include "Header.h"


int main()
{
	welcome();

    while(1)
    {
	system("cls");

	cout << "\t\t====== STUDENT DATABASE MANAGEMENT SYSTEM ======";
	cout <<"\n\n                                          ";
	cout << "\n\n";
	cout << "\n \t\t\t 1. Student       Database";
	cout << "\n \t\t\t 2. Examination   Database";
	cout << "\n \t\t\t 3. Marks         Database";
	cout << "\n \t\t\t 4. Result        Database";
	cout << "\n \t\t\t 5. Exit          Program";
	cout << "\n\n";
	cout << "\t\t\t Select Your Choice :=> ";
	Menu :
	choice = getche();
	switch(choice)
	{
	case '1' :
		e.student();
	    break;
	case '2':
	    e.exam();
	    break;

	case '3' :
	    e.marks();
			break;

	case '4':
	    e.result();
			break;

	case '5':
	    thanks();
	    break;

	case 'a':
	system("cls");
		int p;
		assign_user();
		p=verify_password();
		if(p == 0)
		{
			cout<<"\nThank You Fo Login\n";
			fflush(stdin);
		another = getche();
		}
		else
		{
			cout<<"\n\tYou are Not a Valid User.";
			cout<<"\n\tYou Don't have the Authority to Create Question Bank. Bye\n\n";
			fflush(stdin);
		another = getche();
		}
		break;

	default :
		cout<<"\nError Wrong Choice \nRe-Enter Choice : ";
		goto Menu;
	}
    }

    system("pause");
    return 0;
}


void welcome()
{
	system("cls");
	cout<<"\t%%      %%      ";
	cout<<"\n\t%%      %% %%%%%%% %%      %%%%%%  %%%%%% %%%%%%%%%% %%%%%%%";
	cout<<"\n\t%%      %% %%      %%      %%      %%  %% %%  %%% %% %%       ";
	cout<<"\n\t%%  %%  %% %%%%%   %%      %%      %%  %% %%  %%% %% %%%%%      ";
	cout<<"\n\t%%  %%  %% %%      %%      %%      %%  %% %%      %% %%           ";
	cout<<"\n\t%%%%%%%%%% %%%%%%% %%%%%%% %%%%%%% %%%%%% %%      %% %%%%%%%     ";
	cout<<"\n\n\t\t\t        $$$$$$$$  $$$$$        ";
	cout<<"\n\t\t\t           $$     $   $      ";
	cout<<"\n\t\t\t           $$     $$$$$    ";
	cout<<"\n\n\n\tCOMPUTER   PROJECT  (********  SCHOOL MANAGEMENT  *******)";
	cout<<"\n\n\t\t\t\t       BY  :-";
	cout<<"\n\n\t\t\t\t  Pradyumna Krishna";
	Sleep(2000);
}

void	assign_user()
{

	strcpy(admin.user_name, "admin");
	strcpy(admin.password, "password");
 
}

int verify_password()
{
	char u_name[10];
	char u_pwd[10],temp[2];
	int x=1;
	cout<<"\n\n   Enter user name : ";
	cin>>u_name;
	cout<<"\n\n   Enter Password : ";
	cin>>u_pwd;
	x=strcmp(admin.user_name,u_name);
	if (x==0)
	{
		x=strcmp(admin.password,u_pwd);
 
	}
	cin.getline(temp,2);
	return(x);
 
}

void thanks()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\t**********   THANK  YOU  FOR  WORKING   *******";
	cout<<"\n\n\t**********   Exiting.......   *******";
	Sleep(3000);
	exit(0);
	
}

