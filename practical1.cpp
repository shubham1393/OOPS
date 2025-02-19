
#include <iostream>
#include<string.h>
using namespace std;
class student
{
	public:
	int roll_no;	
	char clas[10];
	int sr_no;
	long int tele_no;
	char name[20];
	char div;
	char blood_grp;
	char DOB[10];
	static int count;
	

	void getdata();
	friend void display(student & obj);

	student()  

	{
		roll_no=0;
		cout<<"\tConstructor";
		roll_no=count;
		count++;
	}
	~student()  
	{
		cout<<"\nDestructor";
		cout<<"\nDestroying the object";
		count--;
	}
	student(int roll_no)
	{
		this->roll_no=roll_no;
	}

	student (student & obj)

	{
		roll_no=obj.roll_no;
		strcpy(name,obj.name);
		strcpy(DOB,obj.DOB);
		strcpy(clas,obj.clas);
		blood_grp=obj.blood_grp;
		div=obj.div;
		tele_no=obj.tele_no;
		sr_no=count;
		count++;
	}
};
	int student :: count=0;
	void student:: getdata()
	{
		cout<<"\n"<<"Enter the roll number of the student:";
		cin>>roll_no;

		cout<<"\n"<<"Enter the name of the student:";
		cin>>name;

		cout<<"\n"<<"Enter the date of birth of the student:";
		cin>>DOB;

		cout<<"\n"<<"Enter the blood group of the student:";
		cin>>blood_grp;

		cout<<"\n"<<"Enter the class of the student:";
		cin>>clas;

		cout<<"\n"<<"Enter the division of the student:";
		cin>>div;

		cout<<"\n"<<"Enter the contact of the student:";
		cin>>tele_no;
	}
	void display(student & obj)
	{
		cout<<"\n"<<obj.roll_no;
		cout<<"\n"<<obj.name;
		cout<<"\n"<<obj.DOB;
		cout<<"\n"<<obj.blood_grp;
		cout<<"\n"<<obj.clas;
		cout<<"\n"<<obj.div;
		cout<<"\n"<<obj.tele_no;
		
	}
		
int main()
{

	student s1;
	student s2(s1);
	cout<<"\n Enter the details of a student:"<<"\n";
	s1.getdata();

	cout<<"All data is as displayed below:"<<"\n";
	
	cout<<"\n roll no" ; 
    cout<<"\n name" ;
    cout<<"\n dob" ;
    cout<<"\n blood group" ;
    cout<<"\n class" ;
    cout<<"\n division" ;
    cout<<"\n contact no ";
	display(s1);

	return 0;
}


// Enter the details of a student:

// Enter the roll number of the student:12

// Enter the name of the student:Sarthak

// Enter the date of birth of the student:16/03/2004

// Enter the blood group of the student:ab

// Enter the class of the student:SE

// Enter the division of the student:B

// Enter the contact of the student:1252226562
// All data is as displayed below:

//  roll no
//  name
//  dob
//  blood group
//  class
//  division
//  contact no
// 65
// sarthak
// 16/03/2004
// ab
// SE
// B
// 1252226562