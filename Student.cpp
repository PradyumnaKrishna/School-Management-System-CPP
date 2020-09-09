#include "Header.h"

int student::load()
{
	fp = fopen("student.dat", "rb+");

	if(fp == NULL)
	{
		fp = fopen("student.dat", "wb+");
		if (fp == NULL)
		{
			puts("Cannot open file");
			cin.get();
			return 0;
		}
	}
	recsize = sizeof(e);
	return 0;
}

void student::add_rec()
{
	stu.load();
	fseek(fp, 0, SEEK_END);
	another ='Y';
	while(another == 'Y' || another == 'y')
	{
		system("cls");
		cout << "Welcome To Record Adding Menu Enter The Following Details";
		cout << "\n==============================================================================================================\n\n" ;
		cout << "Enter the Roll No. \t\t\t: ";
		cin >> e.rno;
		cout << "Enter the First Name \t\t\t: ";
		cin.get();
		cin.getline(e.name, 50);
		cout << "Enter the Date of Birth (dd/mm/yyyy) \t: ";
		cin >> e.DOB;
		cout << "Enter the Class \t\t\t: ";
		cin >> e.std;
		cout << "Enter the Section \t\t\t: ";
		cin >> e.sec;
		cout << "Enter the Student ID \t\t\t: ";
		cin >> e.ID;
		cout << "Enter the Fathers Name \t\t\t: ";
		cin.get();
		cin.getline(e.fname, 50);
		cout << "Enter the Mothers Name \t\t\t: ";
		cin.get();
		cin.getline(e.mname, 50);
		cout << "Enter the Phone No. \t\t\t: ";
		cin >> e.phone;
		cout << "Enter Address \t:-\n";
			cout << "\tEnter Address Line 1 \t\t: ";
			cin.get();
			cin.getline(e.addr1, 50);
			cout << "\tEnter Address Line 2 \t\t: ";
			cin.get();
			cin.getline(e.addr2, 50);
			cout << "\tEnter city \t\t: ";
			cin.get();
			cin.getline(e.city, 25);
			cout << "\tEnter State \t\t: ";
			cin.get();
			cin.getline(e.state, 25);
			cout << "\tEnter Pincode \t\t: ";
			cin >> e.pin;

		fwrite(&e,recsize,1,fp);
		cout << "\n Add Another Record (Y/N) ";
		fflush(stdin);
		another = getchar();
	   }
}
void student::show_rec()
{
	stu.load();
	system("cls");
	rewind(fp);
	cout << "=== View the Records in the Database ===";
	cout << "\n";
	cout << "\nRoll No.\tStudent ID\t\tName\t\tClass\tSection\n" ;
	cout << "==============================================================================================================" ;
	while (fread(&e,recsize,1,fp) == 1)
	{	
	    cout << "\n  " << e.rno << "\t\t" << e.ID ;
		cout << "\t" << e.name ;
	    cout << setw(5) << "\t" << e.std <<  "\t"  << e.sec ;
	}
    
	cout << "\n============================================================================================================";
	cout << "\n\n\n  Enter the Roll No. of the Student To View Full \t: ";
	cin >> xrno;
	rewind(fp);
	cout << "\n============================================================================================================\n";
	while (fread(&e,recsize,1,fp) == 1)
	{	
		if ( strcmp(e.rno, xrno) == 0)
	    {
	    	cout << "\n  Roll No. \t\t: "<<e.rno;
	    	cout << "\n  Name \t\t\t: "<<e.name;
			cout << "\n Date Of Birth (dd/mm/yyyy) \t: "<<e.DOB;
	        cout << "\n  Class \t\t: "<<e.std;
	        cout << "\n  Section \t\t: "<<e.sec;
	        cout << "\n  Student Id \t\t: "<<e.ID;
	    	cout << "\n  Fathers Name \t\t: "<<e.fname;
	    	cout << "\n  Mothers Name \t\t: "<<e.mname;
	    	cout << "\n  Phone No. \t\t: "<<e.phone;
			cout << "\n Address \t:-";
				cout << "\tEnter Address Line 1 \t\t: "<<e.addr1;
				cout << "\tEnter Address Line 2 \t\t: "<<e.addr2;
				cout << "\tEnter city \t\t: "<<e.city;
				cout << "\tEnter State \t\t: "<<e.state;
				cout << "Enter Pincode \t\t: "<<e.pin;
			fseek(fp, - recsize, SEEK_CUR);
			fwrite(&e,recsize,1,fp);
	    	break;
		}
	    else
	    cout<<"  Record Not Found";
	}
	cout << "\n============================================================================================================\n";
	system("pause");
	cout << "\n\n";
}

void student::mod_rec()
{
	stu.load();
	system("cls");
	another = 'Y';
	while (another == 'Y'|| another == 'y')
	{
		cout << "\n  Enter the Roll No. of the student \t: ";
		cin >> xrno;
		rewind(fp);
		cout << "\n Enter Following Details for Update Info ";
		cout << "\n============================================================================================================\n";

		while (fread(&e,recsize,1,fp) == 1)
		{
			if ( strcmp(e.rno, xrno) == 0)
		    {
				cout << "  Enter new Roll No.      \t: ";
				cin >> e.rno;
		    	cout << "  Enter the Name \t: ";
		        cin.get();
				cin.getline(e.name, 50);
		        cout << "  Enter the Class \t\t: ";
		        cin >> e.std;
		        cout << "  Enter the Section \t\t: ";
				cin >> e.sec;
		    	cout << "  Enter the Fathers Name \t\t: ";
				cin.get();
		    	cin.getline(e.fname, 50);
		    	cout << "  Enter the Mothers Name \t\t: ";
		    	cin.get();
				cin.getline(e.mname, 50);
		    	cout << "  Enter the Phone No. \t\t: ";
		    	cin >> e.phone;
				cout << "Enter Address \t:-";
					cout << "\tEnter Address Line 1 \t\t: ";
					cin.get();
					cin.getline(e.addr1, 50);
					cout << "\tEnter Address Line 2 \t\t: ";
					cin.get();
					cin.getline(e.addr2, 50);
					cout << "\tEnter city \t\t: ";
					cin.get();
					cin.getline(e.city, 25);
					cout << "\tEnter State \t\t: ";
					cin.get();
					cin.getline(e.state, 25);
					cout << "Enter Pincode \t\t: ";
					cin >> e.pin;
			    fseek(fp, - recsize, SEEK_CUR);
				fwrite(&e,recsize,1,fp);
				break;
			}
		    else
			    cout<<"  Record Not Found";
		}
		cout << "\n  Modify Another Record (Y/N) ";
		fflush(stdin);
		another = getchar();
	}
}

void student::del_rec()
{
	stu.load();
	system("cls");
	another = 'Y';
	while (another == 'Y'|| another == 'y')
	{
		cout << "\n Enter the Roll No. of the student to delete : ";
		cin >> xrno;
		ft = fopen("temp.dat", "wb");
		rewind(fp);
		while (fread (&e, recsize,1,fp) == 1)
		if  (strcmp(e.rno, xrno) != 0)
		{
			fwrite(&e,recsize,1,ft);
		}            
		fclose(fp);
		fclose(ft);
		remove("student.dat");
		rename("temp.dat","student.dat");
		fp=fopen("student.dat","rb+");

		cout << "\n Delete Another Record (Y/N) ";
		fflush(stdin);
		another = getchar();
	}
}
