/*Write a program that accepts three numbers and computes their sum, product and average.*/
#include<iostream>
using namespace std;
class sums
{
private:
    int num1,num2,num3;
    int sum;
    double product;
    double average;
public:
   void input();
   void calculation();
   void output();
};
int main()
{
        sums sumation;
        cout<<"Calculations;";
        sumation.input();
        sumation.calculation();
        sumation.output();
        cout<<"/n/n";
        return 0;
}
 void sums::input()
 {
    cout<<"Enter your first number->";
    cin>>num1;
    cout<<"Enter your second number->";
    cin>>num2;
    cout<<"Enter your third number->";
    cin>>num3;
 }
 void sums::calculation()
 {
    sum = num1 + num2 + num3;
    product = num1 * num2 * num3;
    average = sum /3.0;
 }
 void sums::output()
 {
    cout<<"The sum of the 3 numbers is->"<<sum<<endl;
    cout<<"The product of the 3 numbers is->"<<product<<endl;
    cout<<"The average of the 3 numbers is->"<<average<<endl;

 }
