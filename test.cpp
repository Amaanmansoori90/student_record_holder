#include<iostream>
#include<conio.h>
using namespace std;
int takeInput()
{
    int takeinput=0;
    cout<<"Enter a value:";
    cin>>takeinput;
    return takeinput;
}

void addStudent()
{
    system ("cls");
    cout<<"Press 1 for Add new student...!\n";
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