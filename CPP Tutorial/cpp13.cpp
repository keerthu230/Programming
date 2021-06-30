// cpp tutorial 13 
// swapping without the another variable 

#include<iostream>
using namespace std;
 int main()
 {
     int a =17, b=15 ;
     cout<<"before swap ,a = "<< a<<" , b = "<<b<<endl;
     b=a+b; // b haves both a and b
     a=b-a; // -> need to store b, a+b-a=b
     b=b-a;  //-> b need to store a , a+b-b'value(which is now stored in a) ->a+b-a =b-a
     cout<<"after swap ,a = "<< a<<" , b = "<<b<<endl;
 }