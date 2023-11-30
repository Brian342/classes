/*) Define a class that has the following specifications:
Private member variables:
➢ Name (an array of characters)
➢ Mark (an integer)
➢ Grade (a character)
➢ Reg_No (an array of characters)
Public member functions:
➢ input – to be used to input values into member variables.
➢ display – to display contents of member variables.
➢ A constructor to be used to initialize member variables.                              (6 mks)
Declare two objects of the class defined above and initialize them with values.                                                                                                                 (3mks)
Write C# statements that use the objects defined  above to call the two functions input and display defined in (i) above. 
You need not write the whole program.*/
#include<iostream>
using namespace std;
class program
{
private:
    char name[25];
    int mark;
    char grade;
    char Reg_no[20];
public:
    void input();
    void display();
};
int main()
{
     program prog;
    prog.input();
    prog.display();
} 
void program::input()
{
        cout<<"Enter your name->";
        cin>>name;
        cout<<"Enter your marks->";
        cin>>mark;
        cout<<"Enter your Grade";
        cin>>grade;
        cout<<"Enter your Reg_no->";
        cin>>Reg_no;
}
void program::display()
{
    cout<<"Your name is->"<<name<<endl;
    cout<<"Your marks are->"<<mark<<endl;
    cout<<"Your Reg_no is->"<<Reg_no<<endl;

}