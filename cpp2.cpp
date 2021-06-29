//cpp tutorial 2 
//1. setprecision() -> #include<iomanip>
//2. using namespace std; for cout , cin, endl.



#include<iostream>
#include<iomanip> // used for setprecision()
using namespace std; // this is itself enough instead of std::cout, std::cin, std::endl for every time usage
int main()
{
    float annual_salary=50000.99;
    float monthly_salary=annual_salary/12;
    float daily_wages;
    cout<<"Your Annual Salary -> "<<annual_salary<<endl;
    cout<<"Your Monthly Salary -> "<<setprecision(4)<<(monthly_salary)<<endl; // setprecision() used to get the presice value of digits
    cout<<"please enter you expected daily wages ->";
    cin>>daily_wages;
    cout <<"your expected monthly salary will be -> "<< setprecision(5)<<daily_wages*30<<endl;
    cout<<"your expected yearly salary will be -> "<<setprecision(10)<<daily_wages*30*12<<endl;
}
