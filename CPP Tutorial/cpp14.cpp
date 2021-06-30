// cpp tutorial 14 -> is to calculate  the BMI of a person with their height and weight 
// bmi>25->over weight , <18.5 -> under weight , in between 25 and 18.5 -> normal weight

#include<iostream>
using namespace std;
 int main()
 {
     float weight,height ;
     string name;
     cout<<"Please enter your Name -> ";
     cin>>name;
     cout<<"\nPlease the wieght (kg) and your height (m) -> ";
     cin>>weight>>height;
     int BMI= weight/(height*height);

     if(BMI>25)
        cout<<"\nyour are OVER Weight"<<endl;
     else if (BMI<18.5)
        cout<<"\nyour are UNDER Weight"<<endl;
     else
        cout<<"\nyour are Normal Weight"<<endl;
    
     cout<<"\nThe BMI of "<<name<<" is -> "<<BMI<<endl;
     
 }