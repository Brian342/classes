#include<iostream>
using namespace std;
const double FEE_PAYABLE = 90000;
class Student
{
private:
	char adm_no[20],name[25];
	int no_of_units;
	double fee_paid, fee_balance;
public:
	void inputs();//method
	void calculations();//method
	void output();//method
};
int main()
{
	Student stud1;//class.obj

	cout<<"Data entry for the student:\n"
		<<"------------------------------------------------------------\n";
	stud1.inputs();
	stud1.calculations();
	stud1.output();
	cout<<"\n\n";
	return 0;
}
void Student::inputs()//class::method
{
	cout<<"Enter the admission number of the student: ";
	cin>>adm_no;
	cout<<"Enter his/her name: ";
	cin>>name;
	cout<<"Enter the number of units he/she is doing: ";
	cin>>no_of_units;
	cout<<"Enter the fee he/she has paid: ";
	cin>>fee_paid;
}
void  Student::calculations()//class::method
{
	fee_balance = FEE_PAYABLE - fee_paid;
}
void Student::output()//class::method
{
	cout<<"\n\nAnalysis for the student:"
		<<"\n---------------------------------------";
    cout<<"\nAdmission Number: "<<adm_no
		<<"\nName: "<<name
		<<"\nNumber_of_Units: "<<no_of_units
		<<"\nFee Paid: "<<fee_paid
		<<"\nFee Balance: "<<fee_balance;
}

