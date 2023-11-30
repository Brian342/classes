/*Write a program that when run, produces a menu showing beer brands and their prices and then prompts the user enter his/her choice (1,2,3 or 4). 
The user is then asked how many bottles he/she wants. He is then given the total cost (depending on the cost of the beer chosen) as the output. 
See sample dialog below. If he/she enters an invalid choice e.g. 8, he/she should get an error message.
Sample dialog
* * * * Jamal and Daughters Pub * * * *
Beer Brand                              ​Price
1) Tusker                               ​100/=
2) Pilsner                              ​120/=
3) Smirnoff Ice                         ​140/=
4) White Cap​                             90/=
Enter your choice: 2
How many bottles of pilsner do you want? 11
11 bottles of pilsner will cost you Kshs. 1320*/
#include<iostream>
using namespace std;
class pub
{
private:
    int choice;
    int bottles;
public:
    void input();
    void calculation();
};
int main()
{
        pub myclub;
        cout<<"* * * Jamal and Daughters pub * * *"<<endl;
        cout<<"Beer Brand                       price"<<endl;
        cout<<"1) Tusker                         100/="<<endl;
        cout<<"2) pilsner                        120/="<<endl;
        cout<<"3) smirnoff_ice                   140/="<<endl;
        cout<<"4) white_cap                       90/="<<endl;
        myclub.input();
        myclub.calculation();
       
return 0;
}
void pub::input()
{
    cout<<"Kindly select your poison(number):";
    cin>>choice;
    cout<<"How many bottles do you want:";
    cin>>bottles;
}
void pub::calculation()
{
    if(choice==1)
    {
        cout<<bottles<<" bottles of Tusker will cost you:"<<bottles * 100<<endl;
    }
    else if(choice==2)
    {
         cout<<bottles<<" bottles of Pilsner will cost you:"<<bottles * 120<<endl;
    }
    else if(choice==3)
    {
         cout<<bottles<<" bottles of Smirnoff_ice will cost you:"<<bottles * 140<<endl;
    }
    else if(choice==4)
    {
         cout<<bottles<<" bottles of white_cap will cost you:"<<bottles * 90<<endl;
    }
    else 
    {
        cout<<"Not on the menu!";
    }
}
