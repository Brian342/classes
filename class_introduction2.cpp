/*Write a program that accepts distance traveled in metres and the time taken in minutes and then outputs the speed in kilometers per hour (km/h). 
E.g. if someone enters a distance (in metres) of 500 and a time (in minutes) of 15 the output for speed should be 2 km/h.*/
#include<iostream>
using namespace std;
class Distance
{
private:
    double metres;
    double time;
    double speed;
    double convert_metres_to_kilometres;
    double convert_minutes_to_seconds;
public:
    void input();
    void calculation();
    void output();

};
int main()
{
    Distance mydist;
    cout<<"Calculation of Distance"
    <<"---------------------------"<<endl;
    mydist.input();
    mydist.calculation();
    mydist.output();
    return 0;
}
void Distance::input()
{
    cout<<"Enter the Distance in metres->";
    cin>>metres;
    cout<<"Enter the time in minutes->";
    cin>>time;
}
void Distance::calculation()
{
    convert_metres_to_kilometres=metres/1000;
    convert_minutes_to_seconds=time/60;
    speed=convert_metres_to_kilometres/convert_minutes_to_seconds;

}
void Distance::output()
{
    cout<<"The speed is "<<speed<<" km/h";
}