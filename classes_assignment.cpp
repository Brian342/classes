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
using namespace std;
class Program{
private:
    char name[20];
    int mark;
    char grade;
    string Reg_no[20];
public:
    Program(char name[20],int mark, char grade, char Reg[25]);//constructor
    //Program(int mark,char grade);
    void input();
    void display();
    
};
int main()
{
    Program Prog1("Brian kimanzi",70,'A',"Sct221-0181/2023");
    //Program Prog2();
    cout<<"Print prog1"
    <<"--------------------->";
    void input();
    void display();
    cout<<"Print prog2"
    <<"------------------->";
    void input();
    void display();
return 0;
}
Program::Program(char name[20],char grade, int mark, char Reg[25])
{

}
void Program::input()
{
    cout<<"Enter your name->";
    cin.getline (name,sizeof(name));
    cout<<"Enter the mark->";
    cin>>mark;
    cout<<"Enter the grade->";
    cin>>grade;

}
void Program::display(){
    cout<<"Your name is->" <<name;
    cout<<"Your marks are->" <<mark;
    cout<<"Your grade is->"<<grade;
}


