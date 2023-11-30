/* i) Define a class that has the following specifications:
Private member variables:
➢ Name (an array of characters)
➢ Mark (an integer)
➢ Grade (a character)
➢ Reg_No (an array of characters)
Public member functions:
➢ input – to be used to input values into member variables.
➢ display – to display contents of member variables.
➢ A constructor to be used to initialize member variables.                              
> Declare two objects of the class defined above and initialize them with values.                                                                                                                            (3mks)
> Write C# statements that use the objects defined above to call the two functions input and display defined in 
> above. You need not write the whole program.*/
#include<iostream>
#include<string.h>
using namespace std;
class Member
{
private:
    char full_name[20];
    int marks;
    char grades;
    char Reg_no[25];
public:
    Member(char Reg[25], char name[20], int mark, char grade); //constructor
    void input();
    void display(); 
}; 
int main()
{
    Member Prog1("SCT221-0181/2023", "Brian Kimanzi", 70, 'A');
    cout<<"Print prog1"
    <<"--------------------->";
    void input();
    void display();
return 0;
}
Member::Member(char Reg[25], char name[20], int mark, char grade)
{
    strcpy(full_name,name);
    strcpy(Reg_no,Reg);
    marks =mark;
    grades = grade;
}
void Member::input()
{
    cout<<"Enter your name->";
    cin>>full_name;
    cout<<"Enter your Reg_number";
    cin>>Reg_no;
    cout<<"Enter the mark->";
    cin>>marks;
    cout<<"Enter the grade->";
    cin>>grades;
}
void Member::display()
{
    cout<<"Your name is->" <<full_name;
    cout<<"Your marks are->" <<marks;
    cout<<"Your grade is->"<<grades;
}


