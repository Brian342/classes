#include<iostream>
using namespace std;
const double FEE_PAYABLE = 90000;
class Student
{
private:
	char adm_no[20],name[25];
	int number_of_units;
	double fee_paid, fee_balance,compare_fee;
public:
    void inputs();
    void calculations();
    friend double compare_fee(Student stud1,Student stud2);//friend function
    void output();
};
int main(){
	Student stud1;
    Student stud2;
	cout<<"\n\nData entry for student one:\n"
		<<"<============================>\n";
	stud1.inputs(); //stud1.fee_paid = 87000;
	stud1.calculations();
    cout<<"\n\nData entry for student two:\n"
		<<"<============================>\n";
	stud2.inputs(); //stud1.fee_paid = 87000;
	stud2.calculations();
	cout<<"\n\nAnalysis for student one:"
		<<"\n<=============================================>";
	stud1.output();
    cout<<"\n\nThe student has payed Kshs. "<<compare_fee(stud1,stud2);
    cout<<"\n\nAnalysis for student Two:"
		<<"\n<=============================================>";
	stud2.output();
     //cout<<"\n\nThe student has payed Kshs. "<<compare_fee(stud2);

    if(compare_fee(stud1, stud2))
    {
        cout<<"\n\n The two Students have paid equal fee.";
    }
    else
    {
        cout<<"\n\n The two Students have NOT paid equal fee.";
    }
	cout<<"\n\n";
	return 0;
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
double compare_fee(Student stud1,Student stud2)
{
   return stud1.fee_paid,stud2.fee_paid;
   
}