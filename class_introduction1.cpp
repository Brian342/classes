/*Write a program that accepts the weight of a package in grams and then converts it to kilograms 
and also specifies how many such packages form one kilogram. For example, 
if the user enters the weight (in grams) of the package as 100, the output should be;
The weight of the package is 0.1 kilograms.
It takes 10 such packages to form one kilogram.*/
#include<iostream>
using namespace std;
const int kilograms=1000;
class package
{
private:
    double weight;
    double convert_Grams_To_Kilograms;
public:
    void input();
    void calculation();
    void output();
};
int main()
{
        package mypackage;
        cout<<"Data entry for package;"<<endl;
        cout<<"-----------------------"<<endl;
        mypackage.input();
        mypackage.calculation();
        mypackage.output();
        return 0;

}
void package::input()

{
    cout<<"Enter your weight(grams): ";
    cin>>weight;
}
void package::calculation()

{
    convert_Grams_To_Kilograms = (weight)/kilograms;
    
    (int(weight)%1000==0)?cout<<weight<<" It takes such packages to form one kilogram":cout<<"It takes "
    <<1000/(int(weight) % 1000)<<" number of packages to form one kilogram"<<endl;


}

void package::output()

{
    cout<<"The weight of the package is "<< convert_Grams_To_Kilograms <<" kilograms";
} 
