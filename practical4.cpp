
#include<iostream>
#include<fstream>
using namespace std;

class Employee
{
    char Name[20];
    int ID;
    double salary;
    public:
        void accept()
        {
            cin>>Name;
            cin>>ID;
            cin>>salary;
        }
        void display()
        {
            cout<<"\n Enter Name:"<<Name;
            cout<<"\n Enter Id:"<<ID;
            cout<<"\n Enter Salary:"<<salary;
        }
};
       
int main()
{
    Employee o[10];
    fstream f;
    int i,n;
   
    f.open("bhote.txt");
    cout<<"\n Enter the employee no. ";
    cin>>n;
    cout<<"\n Enter information (NAME/ID/SALARY)";
    for(i=0;i<n;i++)
    {
        cout<<"\n Enter information of :"<<i<<"\n Employee  ";
        o[i].accept();
        f.write((char*)&o[i],sizeof o[i]);
    }
   
    f.close();
   
    f.open("bhote.txt",ios::in);
    cout<<"\n Information of Employees :";
    for(i=0;i<n;i++)
    {
        f.write((char*)&o[i],sizeof o[i]);
        o[i].display();
    }
    f.close();
   
    return 0;
}

// Enter the employee no. 2

//  Enter information (NAME/ID/SALARY)
//  Enter information of :0
//  Employee  sarthak
// 2212
// 500000

//  Enter information of :1
//  Employee  Pande
// 2210
// 10000

//  Information of Employees :
//  Enter Name:sarthak
//  Enter Id:2212
//  Enter Salary:500000
//  Enter Name:Pande
//  Enter Id:2210
//  Enter Salary:10000