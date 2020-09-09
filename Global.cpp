#include "Header.h"



void Global::student()
{
	system("cls");

	cout << "\t\t====== STUDENT DATABASE MANAGEMENT ======";
	cout <<"\n\n                                          ";
	cout << "\n\n";
	cout << "\n \t\t\t 1. Add    Records";
	cout << "\n \t\t\t 2. List   Records";
	cout << "\n \t\t\t 3. Modify Records";
	cout << "\n \t\t\t 4. Delete Records";
	cout << "\n \t\t\t 5. Back  To  Menu";
	cout << "\n\n";
	cout << "\t\t\t Select Your Choice :=> ";
	stu :
	fflush(stdin);
	ch = getche();
	switch(ch)
	{
	case '1' :
		stu.add_rec();
	    break;
	case '2':
	    stu.show_rec();
	    cout << "\n\n";
	    break;

	case '3' :
		stu.mod_rec();
	    break;


	case '4':
		stu.del_rec();
	    break;

	case '5':
	    fclose(fp);
		fflush(stdin);
		another = getche();
		break;

	default :
		cout<<"\nError Wrong Choice \nRe-Enter Choice : ";
		goto stu;
	}
}

void Global::exam()
{
	system("cls");
	cout<<"Under Construction";
	fflush(stdin);
	another = getche();
}

void Global::marks()
{
	system("cls");
	cout<<"Under Construction";
	fflush(stdin);
	another = getche();
}

void Global::result()
{
	system("cls");
	cout<<"Under Construction";
	fflush(stdin);
	another = getche();
}
