#include<iostream>
#include<conio.h>
#include<fstream>
#include <string>
using namespace std;
struct StudentInfo {
    string firstname;
    string lastname;
    int age;
    int rollnum;
};
void createDataStored (StudentInfo);
void mainScreen();
int takeInput()
{
    int takeinput=0;
    cout<<"Enter a value:";
    cin>>takeinput;
    return takeinput;
}

void storedStudentRecord()
{
    StudentInfo si;
    cout<<"Enter first name of a student";
    cin>>si.firstname;
    cout<<"Enter last name of a student";
    cin>>si.lastname;
    cout<<"Enter age of a student";
    cin>>si.age;
    cout<<"Enter roll number of a student";
    cin>>si.rollnum; 
    // cout<<"\n"<<si.firstname; 
    // cout<<"\n"<<si.lastname;
    // cout<<"\n"<<si.age;
    // cout<<"\n"<<si.rollnum; 
    createDataStored (si);

}
void createDataStored (StudentInfo si)
{
    cout<<"\n"<<si.firstname; 
    cout<<"\n"<<si.lastname;
    cout<<"\n"<<si.age;
    cout<<"\n"<<si.rollnum;  
    string fileName= to_string(si.rollnum) + ".txt";
    cout<<"filename : "<<fileName;
    ofstream MyFile(fileName);

  // Write to the file
  MyFile << si.rollnum <<endl;
  MyFile << si.firstname<<endl;
  MyFile << si.lastname<<endl;
  MyFile << si.age<<endl;

  // Close the file
  MyFile.close();
}
void addStudent()
{
    system ("cls");
    cout<<"Press 1 for Add new student...!\n";
    cout<<"Press 2 for back to first screen!\n";
    switch (takeInput())
    {
        case 1:
            storedStudentRecord();
            break;
        case 2:
            mainScreen();
            break ;
    }
}
void updateRecord()
{

    system ("cls");
    cout<<"Press 1 for update personal record...!\n";
    cout<<"Press 2 for update marks record...!\n";
    cout<<"Press 3 for back to first screen!\n";
    switch (takeInput())
    {
        case 1:
            // personalRecord();
            break;

        case 2:
            // marksRecord();
            break;

        case 3:
            mainScreen();
            break ;
    }
}
void deleteRecord()
{
    system ("cls");
    cout<<"Press 1 for delete student record...!\n";
    cout<<"Press 2 for back to first screen!\n";
}
void mainScreen()
{
    system("cls");
    cout<<"Press 1 for Add new student...!\n";
    cout<<"Press 2 for update student record...!\n";
    cout<<"Press 3 for delete a student record...!\n";
    cout<<"Press 4 for exit from the program...!\n";    
    switch (takeInput())
    {
        case 1:
            addStudent();
            break;

        case 2:
            updateRecord();
            break;
        
        case 3:
            deleteRecord();
            break;

        case 4:
            exit(0);
            break;

           default:
            exit(0);
            break;
    }
}

int main()
{
    mainScreen();
    return 0;
}