#include<iostream>
using namespace std;
const double FEE_PAYABLE = 90000;
class Student
{
private:
	char adm_no[20],name[25];
	int number_of_units;
	double fee_paid, fee_balance;
public:
    void inputs();
    void calculations();
    friend string get_admission(Student stud);//friend function
    void output();
};
int main(){
	Student stud1;
	cout<<"Analysis for the student (the first time):"
		<<"\n<=========================================>";
    stud1.calculations();
	stud1.output();
	cout<<"\n\nData entry for the student:\n"
		<<"<============================>\n";
	stud1.inputs(); //stud1.fee_paid = 87000;
	stud1.calculations();
	cout<<"\n\nAnalysis for the student (the second time):"
		<<"\n<=============================================>";
	stud1.output();
    cout<<"\n\nThe students admission number is. "<<get_admission(stud1);
	cout<<"\n\n";
	
}
void Student::inputs(){
    cout<<"Enter the admission number of the student: ";
	cin>>adm_no;
	cout<<"Enter his/her name: ";
	cin>>name;
	cout<<"Enter the number of units he/she is doing: ";
	cin>>number_of_units;
	cout<<"Enter the fee he/she has paid: ";
	cin>>fee_paid;
}
void Student::calculations(){
   fee_balance = FEE_PAYABLE - fee_paid;
}
void Student::output(){
    cout<<"\nAdmission Number: "<<adm_no
		<<"\nName: "<<name
		<<"\nUnits: "<<number_of_units
		<<"\nFee Paid: "<<fee_paid
		<<"\nFee Balance: "<<fee_balance;
}
string get_admission(Student stud)
{
   return stud.adm_no;
}