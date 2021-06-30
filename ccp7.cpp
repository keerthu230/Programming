// cpp tutorial 7 
// if -else statement -> To find the number is odd or even .

#include<iostream>
using namespace std;

int main()
{
    int number ;
    cout<<"plaese enter the whole number -> ";
    cin>>number;
    
    // number%2 -> will result in remainder >0 or remainder =1 , 
    // if the number is odd ,if(1)-> True->execute the codition inside IF block
    // if the number is even , number%2-> 0 , if(0)-> condition fails , so it will execute the else block .
    
    
    if(number%2)  
    {
        cout <<"Entered Number is a Odd Number "<<endl;
        
    }
    else
        cout<<"Entered number is a Even Number "<<endl;
}