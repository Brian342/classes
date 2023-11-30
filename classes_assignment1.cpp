/*Write a program that will make use of a class called Credit to determine if a department store customer has exceeded the credit 
limit on charge account for each customer, the following facts are available:
➢ Account Number.
➢ Balance at the beginning of the month.
➢ Total of all items charged by this customer this month.
➢ Total of all credits applied to this customer account this month.
➢ Credit Limit.
The program should input each of those facts, calculate balance (= beginning balance + charges – credits) and determine 
if the new balance exceeds the customers credit limit. For those customers whose credit limit is exceeded the program should display the message 
“Credit Limit Exceeded” otherwise the message “Within the credit limit” should be displayed. The program should include a loop that lets the user 
repeat this calculation until he or she is through. NB: 1) The computations should be done for a customer at a time. 
2) Assume that the user doesn’t know exactly how many customers he’s going to work with when he is starting. So don’t ask him/her “How many customers…”*/
#include<iostream>
using namespace std;
class credit
{
private:
    long long int account_number;
    double calculate_balance;
    double balance;
    int charge;
    double credits;
    int credit_limit;
public:
    void input();
    void calculate();
    void output();
};
int main()
{
    credit customer;

    cout<<"Analysis for customers!!"
    <<"\n------------------------------>"<<endl;
    customer.input();
    customer.calculate();
    customer.output();
    cout<<"\n\n";

    return 0;
};
void credit::input()
{
    cout<<"Enter your Account_number: ";
    cin>>account_number;
    cout<<"Enter your balance at the beggining of the month: ";
    cin>>balance;
    cout<<"Enter all your charges this month: ";
    cin>>charge;
    cout<<"Enter all your credits this month: ";
    cin>>credits;
    cout<<"What was your credit limit: ";
    cin>>credit_limit;
    cout<<"\n\n";
}
void credit::calculate()
{
    calculate_balance = balance + charge - credits;

    (calculate_balance > credit_limit)?cout<<"Your credit limit exceeded!!":cout<<"Withing the credit limit!!";
    cout<<"\n\n";
}
void credit::output()
{
    cout<<"\nYour new balance is->"<<calculate_balance
    <<"\nYour account number is->"<<account_number
    <<"\nyour Balance at the beggining of the month is->"<<balance
    <<"\nyour charges this month are->"<<charge
    <<"\nyour credit this month are->"<<credits
    <<"\nyour credit_limit is->"<<credit_limit;
}


// {
//     int customers;
//     customers = 1;
//     while (customers <= 10) 
//     credit customer;
// {
//     cout<<"Analysis for customers!!"
//     <<"\n------------------------------>"<<endl;
//     customer.input();
//     customer.calculate();
//     customer.output();
//     cout<<"\n\n";
    
// };

