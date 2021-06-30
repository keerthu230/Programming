// how to swap two values of two variables -> using temporary variable

#include<iostream>
using namespace std;
int main()
{
    int a=10, b=20;
    int temp =a; // temp container hold a , now a-> value is safe in temp

    cout<<"Before swap , a = "<<a<<" , b = "<<b<<endl;
    a=b; // a container stores the b value , now b-> value is in a
    b= temp; // b container need to have a-> value , temp has a-> value , put temp value in b 
    //swap is done succesful with temp.
    cout<<"After Swap , a = "<<a<<" , b = "<<b<<endl;
}